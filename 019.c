/* Fichero: 019.c */
#include<stdio.h>

int main(){

    int totalPreguntas, totalCorrectas, porcentaje;

    printf("Introduce la cantidad total del preguntas del exámen: ");
    scanf("%i", &totalPreguntas);

    printf("Introduce la cantidad de preguntas contestadas correctamente: ");
    scanf("%i", &totalCorrectas);

    porcentaje=totalCorrectas*100/totalPreguntas;

    if (porcentaje >= 90){

        printf("nivel máximo");
    }

    else{

        if (porcentaje >= 75){

            printf("nivel medio");
        }
        else{

            if (porcentaje >= 50){

                printf("nivel regular");
            }
            else{

                printf("mal nivel");
            }
        }
    }

    return 0;
}
