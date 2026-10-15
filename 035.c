/* Fichero: 035.c */
#include <stdio.h>

int main() {

    int n;
    float sueldo;
    int cont1 = 0, cont2 = 0, x = 1;
    float gastos = 0;

    printf("Cuantos empleados tiene la empresa: ");
    scanf("%i", &n);

    while (x <= n) {
        printf("Ingresa el sueldo del empleado: ");
        scanf("%f", &sueldo);
        if (sueldo <= 300) {
            cont1 = cont1 + 1;
        }
        else {
            cont2 = cont2 + 1;
        }
        gastos = gastos + sueldo;
        x = x + 1;
    }
    printf("Cantidad de empleados con sueldos entre 100 y 300: ");
    printf("%i", cont1);
    printf("\n");
    printf("Cantidad de empleados con sueldos mayores a 300: ");
    printf("%i", cont2);
    printf("\n");
    printf("Gastos totales de la empresa en sueldos: ");
    printf("%f", gastos);

    return 0;
}
