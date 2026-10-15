/* Fichero: 043.c */

#include <stdio.h>

int main() {

    int f, valor;
    int mul3 = 0, mul5 = 0;

    for (f = 1; f <= 10; f++) {

        printf("Introduce un valor: ");
        scanf("%i", &valor);

        if (valor%3 == 0) {

            mul3++;
        }

        if (valor%5 == 0) {

            mul5++;
        }
    }
    printf("La cantidad de valores introducidos multiplos de 3: ");
    printf("%i", mul3);
    printf("\n");
    printf("La cantidad de valores introducidos múltiplos de 5: ");
    printf("%i", mul5);

    return 0;
}
