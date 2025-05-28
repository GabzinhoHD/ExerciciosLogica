#include <stdio.h>

int main()
{
    int i, tam = 20, menorValor = 0, posicao = 0, vetorV[tam];
    
    for(i = 0; i < tam; i++){
        do{
            printf("Informe o %dº valor: ", i+1);
            scanf("%d", &vetorV[i]);
            
            if(i == 0){
                menorValor = vetorV[i];
                posicao = i;
            }
            
            else if(vetorV[i] < menorValor){
                menorValor = vetorV[i];
                posicao = i;
            }
        
        }while(vetorV[i] < 0);
    }

    printf("\n---RESULTADO---\n");
    printf("O menor valor é: %d\n", menorValor);
    printf("Na posição %d do vetor", posicao+1);
    
    
    return 0;
}
