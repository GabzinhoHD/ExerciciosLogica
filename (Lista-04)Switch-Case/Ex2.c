#include <stdio.h>

int main()
{
    int dia;
    printf("---INDICADOR DO DIA DA SEMANA---\n\n");
    printf("Que dia é hoje?(1º ao 7º)\n");
    scanf("%i", &dia);
    
    switch(dia){
        case 1:
            printf("Hoje é Domingo!");
            break;

        case 2:
            printf("Hoje é Segunda-feira!");
            break;
        
        case 3:
            printf("Hoje é Terça-feira!");
            break;
        
        case 4:
            printf("Hoje é Quarta-feira!");
            break;
            
        case 5:
            printf("Hoje é Quinta-feira!");
            break;
            
        case 6:
            printf("Hoje é Sexta-feira!");
            break;
        
        case 7:
            printf("Hoje é Sabado!");
            break;

        default:
            printf("Valor Incorreto!!");
    }

    return 0;
}
