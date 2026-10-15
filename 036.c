/* Fichero: 036.c */
#include <stdio.h>

int main() {
    int x = 1, serie = 11;

    while (x <= 25) {
        printf("%i", serie);
        printf(" - ");
        serie = serie + 11;
        x = x +1;
    }
    return 0;
}
