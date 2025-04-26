#include <stdio.h>

int main()
{
    int mes;
    printf("-----INDICADOR DE TRIMESTRE-----\n\n");
    printf("Em que mês estamos?(numero do mês)\n");
    scanf("%i", &mes);
    
    switch(mes){
        case 1:
        case 2:
        case 3:
            printf("Estamos no 1º. Trimestre!");
            break;
        
        case 4:
        case 5:
        case 6:
            printf("Estamos no 2º. Trimestre!");
            break;
        
        case 7:
        case 8:
        case 9:
            printf("Estamos no 3º. Trimestre!");
            break;

        case 10:
        case 11:
        case 12:
            printf("Estamos no 4º. Trimestre!");
            break;
    
        default:
            printf("Valor Incorreto!!");
    }

    return 0;
}
