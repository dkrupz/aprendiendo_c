/* Fichero: 012.c */
#include<stdio.h>

int main() {
    int num1, num2, suma, producto, division, diferencia;

    printf("Introduce el primer valor: ");
    scanf("%i", &num1);

    printf("Introduce el segundo valor: ");
    scanf("%i", &num2);

    if (num1 > num2) {

        suma=num1+num2;

        printf("La suma de los dos valores es: ");
        printf("%i", suma);
        printf("\n");

        diferencia=num1-num2;

        printf("La diferencia de los dos valores es: ");
        printf("%i", diferencia);
    }

    else {

        producto=num1*num2;

        printf("El producto de los dos valores es: ");
        printf("%i", producto);
        printf("\n");

        division=num1/num2;

        printf("La division de los dos valores es: ");
        printf("%i", division);
    }

    return 0;
}
