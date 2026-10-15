/* Fichero: 020.c */
#include<stdio.h>

int main(){

    int num1, num2, num3;

    printf("Introduce el primer número: ");
    scanf("%i", &num1);

    printf("Introduce el segundo número: ");
    scanf("%i", &num2);

    printf("Introduce el tercer número: ");
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3){

        printf("%i", num1);
    }
    else{

        if (num2 > num3){

            printf("%i", num2);
        }

        else{

            printf("%i", num3);
        }

    }

    return 0;

}
