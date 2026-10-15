/* Fichero: 028.c */
#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Introduce el primer valor: ");
    scanf("%i", &num1);
    printf("Introduce el segundo valor: ");
    scanf("%i", &num2);
    printf("Introduce el tercer valor: ");
    scanf("%i", &num3);
    if (num1<num2 && num1<num3){
        printf("%i", num1);
    }
    else{
        if (num2<num3){
            printf("%i", num2);
        }
        else{
            printf("%i", num3);
        }
    }
    printf(" - ");
    if (num1>num2 && num1>num3){
        printf("%i", num1);
    }
    else{
        if (num2>num3){
            printf("%i", num2);
        }
        else{
            printf("%i", num3);
        }
    }
    return 0;
}
