#include <stdio.h>

int main()
{
    int i, qtd = 0;
    float soma = 0, valor, valorMax, valorMin, media;

    for(i = 1; i <= 30; i++){
        printf("Digite o %iº numero: ", i);
        scanf("%f", &valor);
        
        /* soma para a media */
        if(valor > 5.9){
            soma = soma + valor;
            qtd++;
        }
        
        /* determinação do max e min */
        if(i == 1){
            valorMax = valor;
            valorMin = valor;
        }
        else {
            if (valor > valorMax) valorMax = valor;
            if (valor < valorMin) valorMin = valor;
        }
    }
    
    media = soma / qtd;
    
    printf("O maior valor é: %.2f\n", valorMax);
    printf("O menor valor é: %.2f\n", valorMin);
    printf("A media dos valores maiores que 5,9 é: %.2f", media);
    
    return 0;
}
