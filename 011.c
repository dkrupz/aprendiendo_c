/* Fichero: 011.c */
#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Introduce el primer número: ");
    scanf("%i", &num1);

    printf("Introduce el segundo número: ");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("%i", num1);
    }

    else
    {
        printf("%i", num2);

    }
    return 0;
}
