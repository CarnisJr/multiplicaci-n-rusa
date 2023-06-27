#include<stdio.h>
#include<stdlib.h>

int main (void){

    //Exponencial sin pow
    int base, exponente;
    float respuesta, baseExponencialNegativo;

    printf("Ingrese la base: ");
    scanf("%d", &base);
    baseExponencialNegativo = base;
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    if(exponente < 0){
        
        respuesta = 1 / baseExponencialNegativo;
        
        while(exponente - 1 > 0){

            respuesta *= respuesta;
            exponente--;
        }
        printf("La respuesta es: %.2f\n", respuesta);

    }else if(exponente == 0){
    
        printf("La respuesta es: 1\n");
    
    }else{

        respuesta = base;
        while(exponente - 1 > 0){

            respuesta *= (float) base;
            exponente--;
        }
        printf("La respuesta es: %.2f\n", respuesta);
    }


    



    system("pause");
    return 0;
}