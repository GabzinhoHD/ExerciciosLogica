#include <stdio.h>

int main()
{
    int i, tam = 20, maiorValor = 0, posicao = 0, vetorV[tam];

    printf("---DETERMINADOR DO MAIOR VALOR---\n");
    for(i = 0; i < tam; i++){
        do{
            printf("Informe o %dº valor(positivo): ", i+1);
            scanf("%d", &vetorV[i]);
            
            if(vetorV[i] > maiorValor){
                maiorValor = vetorV[i];
                posicao = i;
            }
            if(vetorV[i] < 0) printf("Entrada Invalida!!\n");
        
        }while(vetorV[i] < 0);
    }

    printf("\n---RESULTADO---\n");
    printf("O maior valor é: %d\n", maiorValor);
    printf("Na %dº posição do vetor", posicao+1);
    
    
    return 0;
}
