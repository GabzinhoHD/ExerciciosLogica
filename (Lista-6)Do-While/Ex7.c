#include <ctype.h>
#include <stdio.h>

int main()
{
    int i = 1, numA = 0, numC = 0, numF = 0;
    float perA, perC, perF;
    char torce;
    
    printf("---TORCIDAS DO PARANÁ---\n");
    do{
        printf("--INFORME SEU TIME--\n");
        printf("[A] - Atletico\n[C] - Coritiba\n[F] - Foz\n[S] - Sair\n");
        scanf(" %c", &torce);
        torce = toupper(torce);
        if(torce != 'S'){
            if(torce == 'A'){
                numA++;
                i++;
            }
            else if(torce == 'C'){
                numC++;
                i++;
            }
            else if(torce == 'F'){
                numF++;
                i++;
            }
            else{
                printf("Entrada Invalida!!\n");
            }
        }
        
    }while(torce != 'S');
    i--;
    
    perA = (float)numA / i *100;
    perC = (float)numC / i *100;
    perF = (float)numF / i *100;
    
    printf("Total de Entrevistados: %d\n", i);
    printf("Torcedores do Atletico: %d, Percentual: %.1f%%\n", numA, perA);
    printf("Torcedores do Coritiba: %d, Percentual: %.1f%%\n", numC, perC);
    printf("Torcedores do Foz     : %d, Percentual: %.1f%%\n", numF, perF);

    return 0;
}
