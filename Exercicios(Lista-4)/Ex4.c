#include <stdio.h>
#include <ctype.h>

int main()
{
    int mes;
    char ano;
    
    printf(" --------INDICADOR DE DIAS POR MÊS-------\n\n");
    printf("Em que mês estamos?(Insira o número do mês)\n");
    scanf("%i", &mes);
    
    switch(mes){
        case 1:
            printf("Janeiro tem 31 dias.");
            break;
    
        case 2:
            printf("O Seu ano é Bissexto? (S/N)\n ");
            scanf(" %c", &ano);
            
            if(ano == 's' || ano == 'S'){
                printf("Fevereiro tem 29 dias (em anos bissextos).");
            } 
        
            else if (ano == 'n' || ano == 'N'){
                printf("Fevereiro tem 28 dias (em anos não bissextos).");
            }
            
            else{ 
                printf("Digite uma resposta valida em [S] ou [N] ");
            }
        
            break;
        case 3:
            printf("Março tem 31 dias.");
            break;
        
        case 4:
            printf("Abril tem 30 dias.");
            break;
    
        case 5:
            printf("Maio tem 31 dias.");
            break;
    
        case 6:
            printf("Junho tem 30 dias.");
            break;
        
        case 7:
            printf("Julho tem 31 dias.");
            break;
    
        case 8:
            printf("Agosto tem 31 dias.");
            break;
    
        case 9:
            printf("Setembro tem 30 dias");
            break;

        case 10:
            printf("Outubro tem 31 dias");
            break;
    
        case 11:
            printf("Novembro tem 30 dias.");
            break;
    
        case 12:
            printf("Dezembro tem 31 dias.");
            break;
    
        default:
            printf("Valor Incorreto!!");
    }

    return 0;
}
