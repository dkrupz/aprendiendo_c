/* Fichero: 045.c */

#include <stdio.h>

int main() {
    int cantidad, n, base, altura, superficie, f;
    cantidad = 0;
    printf("Cuantos triángulos se van a procesar: ");
    scanf("%i", &n);
    for (f = 1; f <= n; f++) {
        printf("Introduce el valor de la base: ");
        scanf("%i", &base);
        printf("Introduce el valor de la altura: ");
        scanf("%i", &altura);
        superficie = base * altura / 2;
        printf("La superfície del triángulo es: ");
        printf("%i", superficie);
        printf("\n");
        if (superficie > 12) {
            cantidad ++;
        }
    }
    printf("La cantidad de triángulos con superficie mayor a 12: ");
    printf("%i", cantidad);
    getchar();
    return 0;
}
