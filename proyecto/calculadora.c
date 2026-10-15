/* Calculadora.c */

#include <stdio.h>

int main(void)
{
    int num1, num2, suma, resta, multiplica, divide;
    printf("Calculadora simple versión 1.0\n");
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("El resultado de sumar %d y %d es: %d\n", num1, num2, suma);

    return 0;
}
