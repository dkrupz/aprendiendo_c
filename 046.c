/* Fichero: 046.c */

#include <stdio.h>

int main() {
    int suma, valor, f;
    for (f = 1; f <= 10; f++) {
        printf("Introduce un valor: ");
        scanf("%i", &valor);
        if (f > 5) {
            suma = suma + valor;
        }
    }
    printf("La suma de los últimos 5 valores es: ");
    printf("%i", suma);
    getchar();
    return 0;
}
