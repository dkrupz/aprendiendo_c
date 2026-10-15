/* Fichero: 039.c */
#include <stdio.h>

int main() {
    int n, valor;
    int x = 1, pares = 0, impares = 0;

    printf("Cuantos números ingresará: ");
    scanf("%i", &n);

    while (x <= n) {
        printf("Ingresa el valor: ");
        scanf("%i", &valor);

        if (valor%2 == 0) {
            pares = pares + 1;
        }
        else {
            impares = impares + 1;
        }
        x = x + 1;
    }
    printf("Cantidad de pares: ");
    printf("%i", pares);
    printf("\n");
    printf("Cantidad de impares: ");
    printf("%i", impares);

    return 0;
}
