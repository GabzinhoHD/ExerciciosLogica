#include <stdio.h>

int main()
{
    int  num, i = 1, soma = 0, quantNum = 0;
    float media;
    
    printf("---MEDIA ARITMETICA---\n");
    printf("Insira 15 valores(Maiores que 10!\n");
    while(i <= 15){
        scanf("%d", &num);
            if(num > 10){
                soma = soma + num;
                quantNum++;
            }
        i++;
    }
    
    if(quantNum > 0){
        media = (float)soma / quantNum;
        printf("A media é: %f", media);
    }
    else{
        printf("Os valores são menores que 10!!");
    }

    return 0;
}
