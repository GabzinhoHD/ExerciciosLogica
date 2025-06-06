#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, j;
    int matriz[5][5];
    char opcao;
    printf("---OPERAÇOES NA MATRIZ---\n");
    
    printf("\nMATRIZ:\n");
    for(i = 0; i < 5; i++) for(j = 0; j < 5; j++){
        printf("\nlinha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matriz[i][j]);
    }
    
    
    printf("\n---MENU---\n");
    printf("| [a] | Mostrar matriz\n");
    printf("| [b] | Mostrar linha[4] coluna[1]\n");
    printf("| [c] | Mostrar soma da diagonal principal\n");
    printf("| [d] | Atribuir {0} a todo negativo fora da diagonal\n");
    printf("| [e] | Buscar um elemento na matriz\n");
    
    do{
        printf("\nDigite sua opção: ");
        scanf(" %c", &opcao);
        opcao = toupper(opcao);
        if(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D' && opcao != 'E')
        printf("Entrada Invalida!!");
    }while(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D' && opcao != 'E');
    

    printf("\n---RESULTADO---\n");
    switch(opcao){
        case 'A':
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j < 5; j++) {
                    printf("[%d]\t", matriz[i][j]);
                }
                 printf("\n");
            }
            break;
    }
    return 0;
}
