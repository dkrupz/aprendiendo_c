/* Fichero: 007.c */
#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, suma, producto;

    printf("Introduce el primer valor: ");
    scanf("%i", &num1);
    printf("Introduce el segundo valor: ");
    scanf("%i", &num2);
    printf("Introduce el tercer valor: ");
    scanf("%i", &num3);
    printf("Introduce el cuarto valor: ");
    scanf("%i", &num4);

    suma=num1+num2;
    producto=num3*num4;

    printf("La suma de los dos primeros valores es: ");
    printf("%i", suma);

    printf("\n");

    printf("El producto de los dos últimos valores es: ");
    printf("%i", producto);

    return 0;
}
