#include <stdio.h>
#include <ctype.h>

int main()
{
    char categoria;
    printf("---INDICADOR DE VEICULO AUTORIZADO Á DIRIGIR---\n\n");
    printf("Qual a categoria da sua CNH?\n");
    scanf("%c", &categoria);
    categoria = toupper(categoria);
    
    switch(categoria){
        case 'A':
            printf("Categoria A: Moto");
            break;
        
        case 'B':
            printf("Categoria B: Carro");
            break;
        
        case 'C':
            printf("Categoria C: Caminhão");
            break;
        
        case 'D':
            printf("Categoria D: Ônibus");
            break;
            
        case 'E':
            printf("Categoria E: Carreta");
            break;
            
        default:
            printf("Valor Incorreto!!");
    }

    return 0;
}
