/* Fichero: 023.c */
#include<stdio.h>

int main(){

    int primero, segundo, tercero, operacion;

    printf("Introduce el primer número: ");
    scanf("%i", &primero);

    printf("Introduce el segundo número: ");
    scanf("%i", &segundo);

    printf("Introduce el tercer número: ");
    scanf("%i", &tercero);

    if (primero ==  segundo && segundo == tercero){

        operacion = primero + segundo * tercero;
        printf("El resultado de la operación es: %i", operacion);
    }

    return 0;
}
