#include <ctype.h>
#include <stdio.h>

int main()
{
    int i = 1, quantM = 0, quantF = 0, idade, menorI;
    char sexo, olhos, cabelos;
    
    do{
        printf("Informe seu sexo(M/F): ");
        scanf(" %c", &sexo);
        
        sexo = toupper(sexo);
        if(sexo == 'M' || sexo == 'F'){
            printf("Informe sua idade: ");
            scanf(" %d", &idade);
         
            printf("Informe a cor do seus olhos:\n");
            printf("[A] - Azuis\n");
            printf("[C] - Castanhos\n");
            printf("[P] - Pretos\n");
            printf("[V] - Verdes\n");
            scanf(" %c", &olhos);
         
            printf("Informe a cor do seus cabelos:\n");
            printf("[C] - Castanhos\n");
            printf("[L] - Loiros\n");
            printf("[P] - Pretos\n");
            scanf(" %c", &cabelos);
         
            /*Determinação da menor idade*/
            if(i == 1) menorI = idade;
            else{
                if(idade < menorI) menorI = idade;
            }
            /* Determinaçao da contagem das condiçoes*/
            if( sexo == 'M' && 16 <= idade <= 24 && olhos == 'A' && cabelos == 'C'){
                quantM++;
            }
            else if(sexo == 'F' && idade < 40 && olhos == 'P' && cabelos == 'P') {
                quantF++;
            }
            
        }
        
        else{
            printf("Entrada Invalida!!");
        }
        
        i++;
    }while(i <= 50);
    

    return 0;
}
