/* Fichero: 010.c */
#include<stdio.h>

int main()
{
    float sueldo;

    printf("Introduce tu salario: ");
    scanf("%f", &sueldo);

    if (sueldo >3000)
    {
        printf("tienes que pagar impuestos");
    }

    return 0;
}
