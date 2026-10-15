/* Fichero: 005.c */
#include<stdio.h>

int main()
{
    int num1, num2, suma, producto;

    printf("Introduce el primer valor: ");
    scanf("%i", &num1);

    printf("Introduce el segundo valor: ");
    scanf("%i", &num2);

    suma=num1+num2;
    producto=num1*num2;

    printf("La suma de los dos valores es: ");
    printf("%i", suma);
    printf("\n");
    printf("El producto de los dos valores es: ");
    printf("%i", producto);

    return 0;
}
