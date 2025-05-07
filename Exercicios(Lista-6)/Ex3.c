#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 1, numM = 0, numF = 0, soma = 0, maiorI = 0, menorI, idade;
    float media;
    char sexo;
    
    while(i <= 10){
        printf("Informe o sexo(F/M): ");
        scanf(" %c", &sexo);
        
        if(toupper(sexo) == 'M' || toupper(sexo) == 'F'){
            
            printf("Informe a idade: ");
            scanf(" %d", &idade);
        
            /* Comparação determinada por sexo*/
            if(toupper(sexo) == 'M'){
                numM++;
            }
            else if(toupper(sexo) == 'F'){;
                soma = soma + idade;
                numF++;
            }
            
            /*Comparação determinada pelo peso*/
            if(idade > maiorI){
                maiorI = idade;
            }
            else{
                menorI = idade;
            }
            
            i++;
        }
        else{
            printf("Sexo Indefinido!!\n");
        }
    }
    
    media = soma / numF;
    
    printf("A maior idade do grupo é %d.\nA menor idade do grupo é %d!!\n", maiorI, menorI);
    printf("A media das idades das mulheres no grupo é: %.2f!!\n", media);
    printf("Existem %d homens no grupo !!", numM);
    
    return 0;
}
