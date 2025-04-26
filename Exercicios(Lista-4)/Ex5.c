#include <stdio.h>

int main()
{
    float valorCompra, valorPag, valorParcela, valorDif;
    int opcao, parcelas;
    
    printf("\t-----MENU DE PAGAMENTO-----\n\n");
    printf("Informe o valor total da compra\n");
    scanf("%f", &valorCompra);
    
    printf("Informe a forma de pagamento(de acordo com a tabela a baixo)\n\n");
    
    printf("| DIGITE |               FORMAS                         |    MUDANÇAS      |\n");
    printf("|  [1]   | Pagamento à vista                            | 15%% de desconto  |\n");
    printf("|  [2]   | Pagamento com cheque pré-datado para 30 dias | 10%% de desconto  |\n");
    printf("|  [3]   | Pagamento parcelado em 3 vezes               | 5%% de desconto   |\n");
    printf("|  [4]   | Pagamento parcelado em 6 vezes               | não tem desconto |\n");
    printf("|  [5]   | Pagamento parcelado em 12 vezes              | 8%% de acréscimo  |\n\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            valorPag = valorCompra * 0.85;
            valorDif = valorCompra - valorPag;
            if(valorCompra > valorPag){
                printf("| Valor da Compra | Valor do Pagamento   | Diferença dos Valores |\n");
                printf("| R$%.2f          | R$%.2f               | R$%.2f                |", valorCompra, valorPag, valorDif);
            }
            break;
        default:
            printf("Valor Incorreto!!");
    }

    return 0;
}
