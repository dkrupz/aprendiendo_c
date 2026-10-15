/* Fichero: 014.c */
#include<stdio.h>

int main(){

    int numero;

    printf("Escribe un número de uno o dos dígitos: ");
    scanf("%i", &numero);

    if (numero <= 9){

        printf("El número que introdujiste tenía un sólo dígito");

    }

    else{

        printf("El número que introdujiste tenína dos dígitos");

    }

    return 0;

}
