#include <stdio.h>
int main () {   
    char gen;
    float altura, peso, imc;
    printf("Insira seu genero(apenas a inicial), seu peso(quilos) e sua altura(metros):\n");
    scanf("%c", &gen);
    scanf("%f", &peso);
    scanf("%f", &altura);
    
    imc = peso / (altura*altura);
    
    
    if(gen == 'F' || gen == 'f'){
        if(imc < 19){
            printf("Abaixo do peso");
        }
         else if(imc >= 19 && imc <= 23.9){
             printf("Peso normal");
         }
        else if(imc >= 24 && imc <= 28.9){
            printf("Obesidade leve");
        }
        else if(imc >= 29 && imc <=38.9){
            printf("Obesidade moderada");
        }
        else if(imc >= 39){
            printf("Obesidade mórbida");
        }
    }
    
    else if(gen =='M' || gen == 'm'){
         if(imc < 20){
            printf("Abaixo do peso");
        }
         else if(imc >= 20 && imc <= 24.9){
             printf("Peso normal");
         }
        else if(imc >= 25 && imc <= 29.9){
            printf("Obesidade leve");
        }
        else if(imc >= 30 && imc <=39.9){
            printf("Obesidade moderada");
        }
        else if(imc >= 40){
            printf("Obesidade mórbida");
        }
    }
    return 0;
}
