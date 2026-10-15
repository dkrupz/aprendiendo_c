/* Fichero: 027.c */
#include<stdio.h>

int main(){
    float salario;
    int antiguedad;
    printf("Introduce el salario del empleado: ");
    scanf("%f", &salario);
    printf("Introduce la antiguedad del empleado en años: ");
    scanf("%i", &antiguedad);

    if (salario<500 && antiguedad>=10){
        float aumento=salario*0.20;
        float salarioPag=salario+aumento;
        printf("Salario a pagar: ");
        printf("%f", salarioPag);
    }
    else{
        if (salario<500){
            float aumento=salario*0.05;
            float salarioPag=salario+aumento;
            printf("Salario a pagar: ");
            printf("%f", salarioPag);
        }
        else{
            printf("Salario a pagar: ");
            printf("%f", salario);
        }
    }
    return 0;
}
