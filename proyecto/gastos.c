#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <termios.h>
#include <unistd.h>

typedef struct {
    char fecha[11]; // formato de fecha segun el locale del sistema
    char concepto[50];
    char categoria[30];
    long importe_centimos; // dinero SIEMPRE en centimos (long, entero) para evitar errores de redondeo de los float/double
} Movimiento;

// ------------------------------------------------------------------
// Lee un solo caracter del teclado sin esperar a que se pulse Enter.
// ------------------------------------------------------------------
char leer_tecla(void) {
    struct termios anterior, nuevo;
    tcgetattr(STDIN_FILENO, &anterior); // guarda la configuracion actual de la terminal
    nuevo = anterior;
    nuevo.c_lflag &= ~(ICANON | ECHO); // desactiva modo "por lineas" y el eco automatico
    tcsetattr(STDIN_FILENO, TCSANOW, &nuevo);

    char c = getchar(); // lee un solo caracter al instante

    tcsetattr(STDIN_FILENO, TCSANOW, &anterior); // restaura la terminal a como estaba
    return c;
}

// ------------------------------------------------------------------
// GUARDAR: recorre el array y escribe cada movimiento como una linea
// de texto en el fichero, separando los campos por ';' (formato CSV).
// ------------------------------------------------------------------
void guardar_datos(Movimiento movimientos[], int total) {
    FILE *f = fopen("gastos.txt", "w");
    if (f == NULL) {
        printf("Error al guardar el fichero.\n");
        return;
    }
    for (int i = 0; i < total; i++) {
        fprintf(f, "%s;%s;%s;%ld\n",
                movimientos[i].fecha,
                movimientos[i].concepto,
                movimientos[i].categoria,
                movimientos[i].importe_centimos);
    }
    fclose(f);
}

// ------------------------------------------------------------------
// CARGAR: lee el fichero linea a linea y va rellenando el array.
// Recibe punteros dobles/simples porque necesita poder MODIFICAR
// desde dentro el puntero "movimientos" y la variable "capacidad"
// de main (si hace falta ampliar memoria al cargar).
// ------------------------------------------------------------------
int cargar_datos(Movimiento **movimientos, int *capacidad) {
    FILE *f = fopen("gastos.txt", "r");
    if (f == NULL) {
        return 0; // no existe el fichero todavia, no es un error
    }

    int total = 0;
    while (1) {
        if (total == *capacidad) {
            *capacidad *= 2;
            Movimiento *temp = realloc(*movimientos, *capacidad * sizeof(Movimiento));
            if (temp == NULL) {
                printf("Error al ampliar la memoria.\n");
                break;
            }
            *movimientos = temp;
        }

        int leidos = fscanf(f, " %10[^;];%49[^;];%29[^;];%ld\n",
                (*movimientos)[total].fecha,
                (*movimientos)[total].concepto,
                (*movimientos)[total].categoria,
                &(*movimientos)[total].importe_centimos);

        if (leidos != 4) break;
        total++;
    }

    fclose(f);
    return total;
}

int main(void) {
    setlocale(LC_TIME, ""); // usa el formato de fecha configurado en el sistema

    int capacidad = 10;
    Movimiento *movimientos = malloc(capacidad * sizeof(Movimiento));
    if (movimientos == NULL) {
        printf("Error de memoria.\n");
        return 1;
    }

    int total = cargar_datos(&movimientos, &capacidad);

    while (1) {
        printf("\n--- GESTOR DE GASTOS ---\n");
        printf("1. Anadir movimiento\n");
        printf("2. Listar movimientos\n");
        printf("3. Ver balance\n");
        printf("4. Balance por categoria\n");
        printf("5. Borrar movimiento\n");
        printf("6. Editar movimiento\n");
        printf("Q. Salir\n");
        printf("Opcion: ");

        char tecla = leer_tecla();
        printf("%c\n", tecla); // como no hay eco automatico, lo mostramos nosotros

        if (tecla == 'q' || tecla == 'Q') {
            guardar_datos(movimientos, total);
            printf("Hasta luego.\n");
            break;
        }

        int opcion = tecla - '0'; // convierte el caracter '3' en el numero entero 3

        switch (opcion) {
            case 1:
                if (total == capacidad) {
                    capacidad *= 2;
                    Movimiento *temp = realloc(movimientos, capacidad * sizeof(Movimiento));
                    if (temp == NULL) {
                        printf("Error al ampliar la memoria.\n");
                        break;
                    }
                    movimientos = temp;
                }

                printf("Fecha: 1) Hoy   2) Otra fecha\n");
                printf("Opcion: ");
                int opcion_fecha;
                if (scanf("%d", &opcion_fecha) != 1) {
                    printf("Opcion no valida.\n");
                    while (getchar() != '\n');
                    break;
                }

                if (opcion_fecha == 2) {
                    printf("Fecha (AAAA-MM-DD): ");
                    scanf(" %10[^\n]", movimientos[total].fecha);
                } else {
                    time_t ahora = time(NULL);
                    struct tm *fecha_local = localtime(&ahora);
                    strftime(movimientos[total].fecha, sizeof(movimientos[total].fecha), "%x", fecha_local);
                }

                printf("Concepto: ");
                scanf(" %49[^\n]", movimientos[total].concepto);
                printf("Categoria: ");
                scanf(" %29[^\n]", movimientos[total].categoria);
                printf("Importe (en euros, ej: -15.50 o 200): ");
                double importe_euros;
                if (scanf("%lf", &importe_euros) != 1) {
                    printf("Importe no valido.\n");
                    while (getchar() != '\n');
                    break;
                }
                movimientos[total].importe_centimos = (long)(importe_euros * 100);
                total++;
                printf("Movimiento guardado.\n");
                break;

            case 2:
                if (total == 0) {
                    printf("No hay movimientos todavia.\n");
                } else {
                    for (int i = 0; i < total; i++) {
                        printf("%d. [%s] %s (%s): %.2f EUR\n",
                               i + 1,
                               movimientos[i].fecha,
                               movimientos[i].concepto,
                               movimientos[i].categoria,
                               movimientos[i].importe_centimos / 100.0);
                    }
                }
                break;

            case 3: {
                long balance_centimos = 0;
                for (int i = 0; i < total; i++) {
                    balance_centimos += movimientos[i].importe_centimos;
                }
                printf("Balance total: %.2f EUR\n", balance_centimos / 100.0);
                break;
            }

            case 4: {
                char categoria_buscada[30];
                printf("Categoria a consultar: ");
                scanf(" %29[^\n]", categoria_buscada);

                long balance_centimos = 0;
                for (int i = 0; i < total; i++) {
                    if (strcmp(movimientos[i].categoria, categoria_buscada) == 0) {
                        balance_centimos += movimientos[i].importe_centimos;
                    }
                }
                printf("Balance de '%s': %.2f EUR\n", categoria_buscada, balance_centimos / 100.0);
                break;
            }

            case 5: {
                if (total == 0) {
                    printf("No hay movimientos que borrar.\n");
                    break;
                }

                for (int i = 0; i < total; i++) {
                    printf("%d. %s (%s): %.2f EUR\n",
                           i + 1,
                           movimientos[i].concepto,
                           movimientos[i].categoria,
                           movimientos[i].importe_centimos / 100.0);
                }

                printf("Numero a borrar: ");
                int num;
                if (scanf("%d", &num) != 1) {
                    printf("Numero no valido.\n");
                    while (getchar() != '\n');
                    break;
                }

                int indice = num - 1;
                if (indice < 0 || indice >= total) {
                    printf("Numero no valido.\n");
                    break;
                }

                for (int i = indice; i < total - 1; i++) {
                    movimientos[i] = movimientos[i + 1];
                }
                total--;
                printf("Movimiento borrado.\n");
                break;
            }

            case 6: {
                if (total == 0) {
                    printf("No hay movimientos que editar.\n");
                    break;
                }

                for (int i = 0; i < total; i++) {
                    printf("%d. [%s] %s (%s): %.2f EUR\n",
                           i + 1,
                           movimientos[i].fecha,
                           movimientos[i].concepto,
                           movimientos[i].categoria,
                           movimientos[i].importe_centimos / 100.0);
                }

                printf("Numero a editar: ");
                int num;
                if (scanf("%d", &num) != 1) {
                    printf("Numero no valido.\n");
                    while (getchar() != '\n');
                    break;
                }

                int indice = num - 1;
                if (indice < 0 || indice >= total) {
                    printf("Numero no valido.\n");
                    break;
                }

                printf("Nuevo concepto: ");
                scanf(" %49[^\n]", movimientos[indice].concepto);
                printf("Nueva categoria: ");
                scanf(" %29[^\n]", movimientos[indice].categoria);
                printf("Nuevo importe (en euros): ");
                double importe_euros;
                if (scanf("%lf", &importe_euros) != 1) {
                    printf("Importe no valido.\n");
                    while (getchar() != '\n');
                    break;
                }
                movimientos[indice].importe_centimos = (long)(importe_euros * 100);

                printf("Movimiento actualizado.\n");
                break;
            }

            default:
                printf("Opcion NO valida.\n");
        }
    }

    free(movimientos);
    return 0;
}
