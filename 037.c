/* Fichero: 037.c */
#include <stdio.h>

int main() {
    int multiplo8 = 8;

    while (multiplo8 <= 500) {
        printf("%i", multiplo8);
        printf(" - ");
        multiplo8 = multiplo8 + 8;
    }
    return 0;
}
