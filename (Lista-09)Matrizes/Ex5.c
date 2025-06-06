#include <stdio.h>
#include <ctype.h>

int main()
{
    int tam = 5, i, j, soma, busca;
    int matriz[tam][tam];
    char opcao;
    printf("---OPERAÇOES NA MATRIZ---\n");
    
    printf("\nMATRIZ:\n");
    for(i = 0; i < tam; i++) for(j = 0; j < tam; j++){
        printf("\nlinha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matriz[i][j]);
    }
    
    
    printf("\n---MENU---\n");
    printf("| [a] | Mostrar matriz.\n");
    printf("| [b] | Mostrar linha[4] coluna[1].\n");
    printf("| [c] | Mostrar soma da diagonal principal.\n");
    printf("| [d] | Atribuir {0} a todo negativo fora da diagonal.\n");
    printf("| [e] | Buscar um elemento na matriz.\n");
    
    do{
        printf("\nDigite sua opção: ");
        scanf(" %c", &opcao);
        opcao = toupper(opcao);
        if(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D' && opcao != 'E') printf("Entrada Invalida!!");
    }while(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D' && opcao != 'E');
    

    
    switch(opcao){
        case 'A':
            printf("\n---RESULTADO---\n");
            for(i = 0; i < tam; i++) {
                for( j = 0; j < tam; j++) {
                    printf("[%d]\t", matriz[i][j]);
                }
                printf("\n");
            }
        break;
        
        case 'B':
            printf("\n---RESULTADO---\n");
            printf("Linha[4]:\n");
            for(i = 0; i < tam; i++) printf("[%d] ", matriz[i][0]);
            printf("\n\n");
            printf("Coluna[1]:\n");
            for(j = 0; j < tam; j++) printf("[%d]\n", matriz[4][j]);
        break;
        
        case 'C':
            printf("\n---RESULTADO---\n");
            for(i = 0; i < tam; i++) for( j = 0; j < tam; j++){
                if(i == j) soma = soma + matriz[i][j];
            }
            printf("A soma é: [%d]", soma);
        break;
        
        case 'D':
            printf("\n---RESULTADO---\n");
            for(i = 0; i < tam; i++) for( j = 0; j < tam; j++){
                if(i != j && matriz[i][j] < 0) matriz[i][j] = 0;
            }
            for(i = 0; i < tam; i++) {
                for( j = 0; j < tam; j++) {
                    printf("[%d]\t", matriz[i][j]);
                }
                printf("\n");
            }
        break;
        
        case 'E':
            
            printf("Informe o elemento a ser localizado: ");
            scanf("%d", &busca);
            for(i = 0; i < tam; i++) for( j = 0; j < tam; j++){
                if(busca == matriz[i][j]){
                    printf("\n---RESULTADO---\n");
                    printf("Elemento localizado na linha[%d], coluna[%d].", i+1, j+1);
                    return 0;
                }
            }
            printf("Elemento não localizado!!\n");
        break;
    }
    return 0;
}
