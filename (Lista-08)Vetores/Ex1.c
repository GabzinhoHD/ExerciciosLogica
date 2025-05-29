#include <stdio.h>

int main()
{
    int i, vetorA[5], vetorB[5];
    
    printf("---CALCULADOR DO DOBRO DE 5 VALORES---\n");
    for(i = 0; i < 5; i++){
        printf("Informe o %dº valor: ", i+1);
        scanf("%d", &vetorA[i]);
        vetorB[i] = vetorA[i] * 2;
    }
    
    printf("\n---RESULTADO---\n");
    
    for(i = 0; i < 5; i++){
        printf("O dobro do %dº valor é: %d\n", i+1, vetorB[i]);
    }
    return 0;
}
