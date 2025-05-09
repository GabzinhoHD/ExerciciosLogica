#include <ctype.h>
#include <stdio.h>

int main()
{
    int idade, numE = 0, numV = 0, numR = 0; 
    char voto, recomenda;
    
    printf("-----AVALIADOR DE FILMES-----\n");
    do{
        printf("Digite 0 em idade para sair!\n");
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        
        if(idade == 0){
            break;
        }
        
        else{
            numE++;
            printf("Você gostou do filme?(S/N): ");
            scanf(" %c", &voto);
            voto = toupper(voto);
            
            if(voto == 'S'){
                numV++;
            }
            
            else if(voto != 'S' && voto != 'N'){
                printf("Entrada Invalida!!\n");
            }
            
            printf("Você recomendaria esse filme?(S/N): ");
            scanf(" %c", &recomenda);
            recomenda = toupper(recomenda); 
            
            if(recomenda == 'S'){
                numR++;
            }
            
            else if(recomenda != 'S' && recomenda != 'N'){
                printf("Entrada Invalida!!\n");
            }
        }
    }while(idade != 0);
    
    printf("Total de espectadores: %d\n", numE);
    printf("Total de avaliaçoes positivas: %d\n", numV);
    printf("Total de recomendaçoes: %d\n", numR);

    return 0;
}
