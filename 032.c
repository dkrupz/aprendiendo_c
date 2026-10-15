/* Fichero: 032.c */
#include <stdio.h>

int main() {
    int x, cantidad, n;
    float largo;
    x = 1;
    cantidad = 0;
    printf("Cuantas piezas vas a procesar: ");
    scanf("%i", &n);
    while (x <= n) {
        printf("Introduce la medida de la pieza: ");
        scanf("%f", &largo);
        if (largo >= 1.20 && largo <= 1.30) {
            cantidad = cantidad + 1;
        }
        x = x + 1;
    }
    printf("La cantidad de piezas aptas es: ");
    printf("%i", cantidad);
    return 0;
}
