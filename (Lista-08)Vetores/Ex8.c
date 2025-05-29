#include <stdio.h>

int main()
{
    int i, j, tam = 10, vetorA[tam], vetorB[tam];
    
    printf("---INVERSOR DE POSIÇÕES---\n");
    for(i = 0; i < tam; i++){
        printf("Informe o %dº valor: ", i+1);
        scanf("%d", &vetorA[i]);
    }
    
    for(i = 0, j = 9; i < tam; i++, j--){
        vetorB[j] = vetorA[i];
    }

    printf("\n---RESULTADO---\n");
    printf("\n---VETOR NORMAL---\n");
    for(i = 0; i < tam; i++){
        printf("%dº valor: %d\n", i+1, vetorA[i]);
    }
    
    printf("\n---VETOR INVERTIDO---\n");
    for(i = 0; i < tam; i++){
        printf("%dº valor: %d\n", i+1, vetorB[i]);
    }
    
    return 0;
}
