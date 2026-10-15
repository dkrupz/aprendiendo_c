/* Fichero: 008.c */
#include<stdio.h>

int main()
{
    float num1, num2, num3, num4, suma, promedio;

    printf("Introduce el primer valor: ");
    scanf("%f", &num1);
    printf("Introduce el segundo valor: ");
    scanf("%f", &num2);
    printf("Introduce el tercer valor: ");
    scanf("%f", &num3);
    printf("Introduce el cuarto valor: ");
    scanf("%f", &num4);

    suma=num1+num2+num3+num4;
    promedio=suma/4;

    printf("La suma de los cuatro valores es: ");
    printf("%f", suma);

    printf("\n");

    printf("El promedio de los cuatro valores es: ");
    printf("%f", promedio);

    return 0;
}
