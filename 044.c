/* Fichero: 044.c */

#include <stdio.h>

int main() {
    int cantidad, n, f, valor;
    cantidad = 0;
    printf("Cuántos valores introducira: ");
    scanf("%i", &n);
    for (f = 1; f <=n; f++) {
        printf("Introduce el valor: ");
        scanf("%i", &valor);
        if (valor >= 1000) {
            cantidad++;
        }
    }
    printf("Cantidad  de valores introducidos iguales o mayores a 1000: ");
    printf("%i", cantidad);
    getchar();
    return 0;

}
