/* Fichero: 042.c */

#include <stdio.h>

int main() {
    int f, nota;
    int aprobados = 0, suspendidos = 0;

    for (f = 1; f <= 10; f++) {
        printf("Introduce la nota: ");
        scanf("%i", &nota);

        if (nota >= 7) {
            aprobados++;
        }
        else {
            suspendidos++;
        }
    }
    printf("Cantidad de aprobados: ");
    printf("%i", aprobados);
    printf("\n");
    printf("Cantidad de suspendidos: ");
    printf("%i", suspendidos);
    return 0;
}
