/* Fichero: 015.c */
#include<stdio.h>

int main(){

    float nota1, nota2, nota3, promedio;

    printf("Introduce la primera nota: ");
    scanf("%f", &nota1);

    printf("Introducen la segunda nota: ");
    scanf("%f", &nota2);

    printf("Introduce la tercera nota: ");
    scanf("%f", &nota3);

    promedio=(nota1+nota2+nota3)/3;

    if (promedio >= 7){

        printf("Promocionado");
    }

    else{

        if (promedio >= 4){

            printf("Regular");
        }

        else{

            printf("Suspendido");
        }
    }

    return 0;
}
