/* Fichero: 038.c */
#include <stdio.h>

int main() {
    int valor;
    int x = 1, suma1 = 0, suma2 = 0;

    printf("Primer lista");
    printf("\n");

    while (x <= 15) {
        printf("Ingrese un valor: ");
        scanf("%i", &valor);
        suma1 = suma1 + valor;
        x = x + 1;
    }
    x = 1;
    printf("Segunda lista");
    printf("\n");
    while (x <= 15) {
        printf("Ingrese un valor: ");
        scanf("%i", &valor);
        suma2 = suma2 + valor;
        x = x + 1;
    }
    if (suma1 > suma2) {
        printf("Lista 1 mayor");
    }
    else {
        if (suma2 > suma1) {
            printf("Lista 2 mayor");
        }
        else {
            printf("Listas iguales");
        }
    }
    return 0;
}
