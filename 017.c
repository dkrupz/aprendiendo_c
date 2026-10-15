/* Fichero: 017.c */
#include<stdio.h>

int main(){

    int numero;

    printf("Introduce un número: ");
    scanf("%i", &numero);

    if ( numero < 0){

        printf("El número es negativo");
    }

    else{

        if (numero == 0){

            printf("El número es nulo");
        }

        else{

            printf("El número es positivo");

        }

    }

    return 0;

}
