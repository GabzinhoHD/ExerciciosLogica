#include <stdio.h>

int main()
{
    int i, j, l = 3;
    float matriz[3][3];
    
    printf("---DETERMINADOR DA LINHA(MATRIZ-3x3)---\n");
    printf("\nMATRIZ:\n");
    for(i = 0; i < 3; i++) for(j = 0; j < 3; j++){
        printf("\nlinha[%d], coluna[%d]\n", i+1, j+1);
        printf("Informe valor: ");
        scanf("%f", &matriz[i][j]);
    }
    
    while(l > 2){
        printf("\nInforme a linha que deseja ver: ");
        scanf("%d", &l);
        if(l > 2) printf("Linha Inexistente!!\n");
    }
    
    printf("\n---RESULTADO---\n\n");
    pritf("LINHA[l]:\n");
    for(j = 0; j < 3; j++){
        printf("[%.2f] ", matriz[l][j]);
    }

    return 0;
}
