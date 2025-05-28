#include <stdio.h>

int main()
{
    int i, vetorA[10], vetorB[10];
    
    for(i = 0; i < 10; i++){
        printf("Informe o %dº valor: ", i+1);
        scanf("%d", &vetorA[i]);
        if((vetorA[i] % 2) == 0){
            vetorB[i] = vetorA[i] * 5;
        }
        else if((vetorA[i] %2) != 0){
            vetorB[i] = vetorA[i] + 5;
        }
    }
    
    printf("\n---RESULTADO---\n");
    
    for(i = 0; i < 10; i++){
        printf(" O %dº valor é: %d\n", i+1, vetorB[i]);
    }
    return 0;
}
