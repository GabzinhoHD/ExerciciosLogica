#include <stdio.h>

int main()
{
    int i = 1, f = 0, positivo = 0, pares = 0 ,impares = 0, divisiveis = 0;
    float media, mediaP, mediaI, mediaD, soma = 0, somaP = 0, somaI = 0, somaD = 0;
    
    while(f < i){
        printf("Informe o valor inicial: ");
        scanf("%d", &i);
        printf("Informe o valor final: ");
        scanf("%d", &f);
        if(f < i){
            printf("Entrada Invalida!!(inicial maior que final)\n\n");
        }
    }
    
    
    for(; i <= f; i++){
        if(i > 0){
            positivo++;
            soma = soma + i;
        }
        
        if((i % 2) == 0){
            pares++;
            somaP = somaP + i;
        }
        else if((i % 2) != 0){
            impares++;
            somaI = somaI + i;
            
            if((i % 3) == 0 && (i % 4) == 0){
                divisiveis++;
                somaD = somaD + i;
            }
        }
    }
    
    media = soma / positivo;
    mediaP = somaP / pares;
    mediaI = somaI / impares;
    mediaD = somaD / divisiveis;
    
    printf("\n\t---QUANTIDADES---\n");
    printf("A quantidade de inteiros positivos é: %d\n", positivo);
    printf("A quantidade de pares é: %d\n", pares);
    printf("A quantidade de impares é: %d\n", impares);
    printf("A quantidade de impares divisiveis por 3 & 4 é: %d\n", divisiveis);
    printf("\n\t---MEDIAS---\n");
    printf("A media dos inteiros positivos é: %.2f\n", media);
    printf("A media dos pares é: %.2f\n", mediaP);
    printf("A media dos impares é: %.2f\n", mediaI);
    printf("A media dos impares divisiveis por 3 & 4 é: %.2f\n", mediaD);
    
    return 0;
}
