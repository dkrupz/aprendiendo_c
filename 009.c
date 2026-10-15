/* Fichero: 009.c */
#include<stdio.h>

int main()
{
    float articulo, total;
    int unidades;

    printf("Introduce el precio del artículo: ");
    scanf("%f", &articulo);

    printf("Introduce las unidades de dicho artículo: ");
    scanf("%i", &unidades);

    total=articulo*unidades;

    printf("El coste total es: ");
    printf("%f", total);

    return 0;
}
