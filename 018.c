/* Fichero: 018.c */
#include<stdio.h>

int main(){

    int num;

    printf("Introduce un número positivo de hasta 3 dígitos: ");
    scanf("%i", &num);

    if (num < 10){

        printf("Tiene un dígito");
    }

    else{

        if (num < 100){

            printf("Tiene dos dígitos");
        }

        else {

            if (num < 1000){

                printf("Tiene 3 dígitos");
            }

            else{

                printf("Error en la entrada de datos");
            }
        }
    }

    return 0;
}
