/* Fichero: 006.c */
#include<stdio.h>

int main()
{
    int lado, perimetro;
    printf("Introduce el lado del cuadrado: ");
    scanf("%i", &lado);
    perimetro=lado*4;
    printf("El perímetro del cuadrado es: ");
    printf("%i", perimetro);

    return 0;
}
