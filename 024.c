/* Fichero: 024.c */
#include<stdio.h>


int main(void)

{

    int num1, num2, num3;

    printf("Introduce el primer valor: ");

    scanf("%i", &num1);


    printf("Introduce el segundo valor: ");

    scanf("%i", &num2);


    printf("Introduce el tercer valor: ");

    scanf("%i", &num3);


    if (num1<10 && num2<10 && num3<10)

    {

        printf("Todos los valores son menores a 10\n");

    }


    return 0;

}
