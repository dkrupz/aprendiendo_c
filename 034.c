/* Fichero: 034.c */
#include <stdio.h>

int main() {

    int n;
    float altura, promedio;

    int x = 1;
    float suma = 0;

    printf("Cuantas personas hay: ");
    scanf("%i", &n);

    while (x <= n) {

        printf("Introduce la altura: ");
        scanf("%f", &altura);

        suma = suma + altura;
        x = x + 1;
    }

    promedio = suma / n;
    printf("Altura promedio: ");
    printf("%f", promedio);
    return 0;
}
