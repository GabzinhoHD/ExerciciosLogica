#include <ctype.h>
#include <stdio.h>

int main()
{
    int i = 1;
    float notaA, notaB, media;
    char continua;
    
    printf("---MEDIA DAS NOTAS A & B---\n");
    do{
       printf("Aluno %d\n", i);
       printf("Entre com a nota A: ");
       scanf("%f", &notaA);
       printf("Entre com a nota B: ");
       scanf("%f", &notaB);
       
       media = (notaA + (notaB * 2)) / 2;
       printf("Media do aluno %d = %.1f\n", i, media);
        
       /*Laço para continuação*/
       do{
           printf("Continuar?(S/N): ");
           scanf(" %c", &continua);
           continua = toupper(continua);
           if( continua == 'N'){
               break;
           }
           
           else if(continua != 'S' && continua != 'N'){
               printf("ERRO: Resposta Invalida!!\n");
           }
           
       }while(continua != 'S');
       
       i++;
    }while(continua == 'S');

    return 0;
}
