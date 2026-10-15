/* Fichero: 031.c */
#include <stdio.h>

int main() {
    int x, suma, valor, promedio;
    x = 1;
    suma =1;
    while (x <= 10) {
        printf("Introduce un valor: ");
        scanf("%i", &valor);
        suma = suma + valor;
        x = x + 1;
    }
    promedio = suma / 10;
    printf("La suma de los 10 valores es: ");
    printf("%i", suma);
    printf("\n");
    printf("El promedio es: ");
    printf("%i", promedio);
    return 0;
}
