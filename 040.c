/* Fichero: 040.c */
#include <stdio.h>

int main() {
    int f = 1;

    for (f = 1; f <= 100; f = f + 1) {
        printf("%i", f);
        printf(" - ");
    }
    return 0;
}
