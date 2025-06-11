#include <stdio.h>

int main()
{
    int i, j, n, tam = 100;
    float notas[tam][4], media[tam], mediaGeral;
    printf("---MEDIA FINAL DA TURMA---\n");
    printf("Informe o nº de alunos: ");
    scanf("%d", &n);
    
    /* Informando as notas dos alunos */
    for(i = 0; i < n; i++){
        printf("\nNotas aluno %d\n", i+1);
        for(j = 0; j < 4; j++){
            printf("%dº Nota: ", j+1);
            scanf("%f", &notas[i][j]);
        }
    }
    
    /* Calculando a soma */
    for(i = 0; i < n; i++) for(j = 0; j < 4; j++){
        media[i] = 0;
        media[i] = media[i] + notas[i][j];
    }
    
    /* Calculando a media */
    for(i = 0; i < n; i++){
        media[i] = media[i] / 4;
    }
    
    /* Calculando a media geral */
    for(i = 0; i < n; i++) mediaGeral = mediaGeral + media[i];
    
    printf("\n---RESULTADO---\n");
    printf("ALUNO NOTA1 NOTA2 NOTA3 NOTA4 MEDIA\n");
    for(i = 0; i < n; i++){
        printf(" %02d ", i+1);
        for(j = 0; j < 4; j++){
            printf("   %.1f", notas[i][j]); //Espacei assim porque achei mais facil(embora valores acima de 2 digitos quebrem o alinhamento) 
        }
        printf("   %.1f", media[i]);
        printf("\n");
    }
    
    printf("\nMEDIA GERAL ................. %.1f", mediaGeral);
    
    return 0;
}
