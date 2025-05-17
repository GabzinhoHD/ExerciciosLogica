#include <ctype.h>
#include <stdio.h>

int main()
{
   int idade, maiorI_M = 0, menorI_H = 0, contH = 1, i = 1;
   float peso, maiorP, menorP;
   char valorG, continua;
   
   do{
       printf("Informe seu genero(H/M): ");
       scanf(" %c", &valorG);
       valorG = toupper(valorG);
       
       if(valorG == 'M' || valorG == 'H'){
        printf("Informe sua idade: ");
        scanf("%i", &idade);
        printf("Informe seu peso: ");
        scanf("%f", &peso);
        
        /* determinaçao das idades*/
        if(valorG == 'M'){
            if(idade > maiorI_M) maiorI_M = idade;
        }
        else if(valorG == 'H'){
            if(contH == 1){
                menorI_H = idade;
                contH = 0;
            }
            else{
                if(idade < menorI_H) menorI_H = idade;
            }
        }
       }
       else{
           printf("Entrada Invalida!!\n");
       }
       /* determinação dos pesos*/
       if(i == 1){
            maiorP = peso;
            menorP = peso;
        }
        else {
            if (peso > maiorP) maiorP = peso;
            if (peso < menorP) menorP = peso;
        }
        
        /*Laço para continuação*/
       do{
           printf("Continuar?(S/N): ");
           scanf(" %c", &continua);
           continua = toupper(continua);
           if( continua == 'N'){
               break;
           }
           
           else if(continua != 'S' && continua != 'N'){
               printf("Resposta Invalida!!\n");
           }
           
       }while(continua != 'S');
       
       i++;
   }while(continua != 'N');
   
   printf("A mulher mais velha possui: %d de idade!\n", maiorI_M);
   printf("O homem mais novo possui: %d de idade!\n", menorI_H);
   printf("A pessoa com maior pesso posui: %.2f kgs!\n", maiorP);
   printf("A pessoa com o menor peso possui: %.2f kgs!\n", menorP);
   
    return 0;
}
