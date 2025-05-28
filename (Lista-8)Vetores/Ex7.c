#include <stdio.h>

int main()
{
    int i, tam = 20, menorValor = 0, posicaoMenor = 0, maiorValor = 0, posicaoMaior = 0, vetorV[tam];
    
    printf("---DETERMINADOR DO MENOR E MAIOR VALOR---\n");
    for(i = 0; i < tam; i++){
        do{
            printf("Informe o %dº valor: ", i+1);
            scanf("%d", &vetorV[i]);
            
            if(i == 0){
                maiorValor = vetorV[i];
                menorValor = vetorV[i];
                posicaoMaior = i;
                posicaoMenor = i;
            }
            
            else if(vetorV[i] < menorValor){
                menorValor = vetorV[i];
                posicaoMenor = i;
            }
            
            else if(vetorV[i] > maiorValor){
                maiorValor = vetorV[i];
                posicaoMaior = i;
            }
        
        }while(vetorV[i] < 0);
    }

    printf("\n---RESULTADO---\n");
    printf("O menor valor é: %d\n", menorValor);
    printf("Na %dº posição do vetor\n", posicaoMenor+1);
    
    printf("\nO maior valor é: %d\n", maiorValor);
    printf("Na %dº posição do vetor", posicaoMaior+1);
    
    
    return 0;
}
