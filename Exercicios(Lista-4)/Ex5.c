#include <stdio.h>

int main()
{
    float valorCompra, valorPag, valorParcela, valorDif;
    int opcao, parcelas;
    
    printf("-----MENU DE PAGAMENTO-----\n\n");
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
            parcelas = 1;
            valorDif = valorCompra - valorPag;
            valorParcela = valorPag / parcelas;
            break;
            
        case 2:
            valorPag = valorCompra * 0.9;
            parcelas = 1; 
            valorDif = valorCompra - valorPag;
            valorParcela = valorPag / parcelas;
            break;
            
        case 3: 
            valorPag = valorCompra * 0.95;    
            parcelas = 3;
            valorDif = valorCompra - valorPag;
            valorParcela = valorPag / parcelas;
            break;
            
        case 4: 
            valorPag = valorCompra; 
            parcelas  = 6;
            valorDif = valorCompra - valorPag;
            valorParcela = valorPag / parcelas;
            break; 
            
        case 5: 
            valorPag = valorCompra * 1.08;
            parcelas = 12;
            valorDif = valorPag - valorCompra;
            valorParcela = valorPag / parcelas;
            break;
            
        default:
            printf("Entrada Invalida.\n");
            return 0;
    }    
        
    if(opcao == 5){
        printf("---RESULTADO DA COMPRA---\n");
        printf("| Valor Total    : R$%.2f\n", valorCompra);
        printf("| Quan. Parcelas : %d    \n", parcelas);
        printf("| Valor Acréscimo: R$%.2f\n", valorDif);
        printf("| Valor Final    : R$%.2f\n", valorParcela);
    }
    else{
        printf("---RESULTADO DA COMPRA---\n");
        printf("| Valor Total   : R$%.2f\n", valorCompra);
        printf("| Quan. Parcelas: %d    \n", parcelas);
        printf("| Valor Desconto: R$%.2f\n", valorDif);
        printf("| Valor Final   : R$%.2f\n", valorParcela);
    }
}
