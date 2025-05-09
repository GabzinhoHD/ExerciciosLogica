#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 1, numH = 0, numM = 0, soma = 0, maiorI, menorI, idade;
    float media;
    char valorG;
    
    while(i <= 10){
        printf("Informe o genero(H/M): ");
        scanf(" %c", &valorG);
        valorG = toupper(valorG);
        
        if(valorG == 'M' || valorG == 'H'){
            
            printf("Informe a idade: ");
            scanf(" %d", &idade);
        
            /* Comparação determinada por sexo*/
            if(valorG == 'H'){
                numH++;
            }
            else if(valorG == 'M'){;
                soma = soma + idade;
                numM++;
            }
            
            /*Comparação determinada pela idade*/
            if (i == 1) {
            maiorI = idade;
            menorI = idade;
            } 
            else {
                if (idade > maiorI) maiorI = idade;
                if (idade < menorI) menorI = idade;
            }
            
         i++;
        }
        else{
            printf("Genero Indefinido!!\n");
        }
    }
    
    media = (float)soma / numM;
    
    printf("A maior idade do grupo é %d!!\nA menor idade do grupo é %d!!\n", maiorI, menorI);
    printf("A media das idades das mulheres no grupo é: %.2f!!\n", media);
    printf("Existem %d homens no grupo !!", numH);
    
    return 0;
}
