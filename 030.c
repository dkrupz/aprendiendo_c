/* Fichero: 030.c */
#include <stdio.h>

int main() {
    int n, x;
    printf("Escribe un valor positivo: ");
    scanf("%i", &n);
    x = 1;
    while (x <= n){

        printf("%i", x);
        printf(" ");
        x = x + 1;
    }
    return 0;
}
