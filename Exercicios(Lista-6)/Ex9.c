#include <ctype.h>
#include <stdio.h>

int main()
{
    int i = 1, quantM = 0, quantF = 0, idade, menorI;
    char sexo, olhos, cabelos;
    
    do{
        printf("Pessoa %d responda a pesquisa:\n", i);
        printf("Informe seu sexo(M/F): ");
        scanf(" %c", &sexo);
        
        sexo = toupper(sexo);
        if(sexo == 'M' || sexo == 'F'){
            
            do{
                printf("Informe sua idade: ");
                scanf(" %d", &idade);
            }while(idade <= 0);
            
            /*Menu cor olhos*/
            do{
            printf("Informe a cor do seus olhos:\n");
            printf("[A] - Azuis\n");
            printf("[C] - Castanhos\n");
            printf("[P] - Pretos\n");
            printf("[V] - Verdes\n");
            scanf(" %c", &olhos);
            olhos = toupper(olhos);
            }while(olhos != 'A' && olhos != 'V' && olhos != 'P' && olhos != 'C');
            
            /*Menu cor cabelos*/
            do{
            printf("Informe a cor do seus cabelos:\n");
            printf("[C] - Castanhos\n");
            printf("[L] - Loiros\n");
            printf("[P] - Pretos\n");
            scanf(" %c", &cabelos);
            cabelos = toupper(cabelos);
            }while(cabelos != 'L' && cabelos != 'C' && cabelos != 'P');
         
            /*Determinação da menor idade*/
            if(i == 1) menorI = idade;
            else{
                if(idade < menorI) menorI = idade;
            }
            
            /* Determinaçao da contagem das condiçoes*/
            if( sexo == 'M' && idade >= 16 && idade <= 24 && olhos == 'A' && cabelos == 'C'){
                quantM++;
            }
            else if(sexo == 'F' && idade < 40 && olhos == 'P' && cabelos == 'P') {
                quantF++;
            }
            i++; 
        }
        
        else{
            printf("Entrada Invalida!!\n");
        }

    }while(i <= 2);
    
    printf("---RESULTADO---");

    return 0;
}
