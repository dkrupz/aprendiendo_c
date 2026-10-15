/* Fichero: 025.c */
#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Introduce el primer valor: ");
    scanf("%i", &num1);
    printf("Introduce el segundo valor: ");
    scanf("%i", &num2);
    printf("Introduce el tercer valor: ");
    scanf("%i", &num3);

    if (num1<10 || num2<10 || num3<10)
    {
        printf("Al menos uno de los valores que introdujiste es menor a 10\n");
    }
return 0; }
