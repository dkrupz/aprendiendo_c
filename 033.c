/* Fichero: 033.c */
#include <stdio.h>

int main() {
    int x, nota, altas, bajas;
    altas = 0;
    bajas = 0;
    x = 1;
    while (x <= 10) {
        printf("Introduce nota: ");
        scanf("%i", &nota);
        if (nota >= 7) {
            altas = altas + 1;
        }
        else {
            bajas = bajas + 1;
        }
        x = x + 1;
    }
    printf("Cantidad de alumnos con notas mayores o iguales a 7: ");
    printf("%i", altas);
    printf("\n");
    printf("Cantidad de alumnos con notas menores a 7: ");
    printf("%i", bajas);
    return 0;
}
