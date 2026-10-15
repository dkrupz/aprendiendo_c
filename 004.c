/* Fichero: 004.c */
#include<stdio.h>

int main()
{
    int lado;
    int superficie;

    printf("Introduce el valor del lado del cuadrado: ");
    scanf("%i",&lado);

    superficie=lado*lado;

    printf("%i",superficie);

    return 0;
}
