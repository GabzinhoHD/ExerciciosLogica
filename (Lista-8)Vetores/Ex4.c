#include <stdio.h>

int main()
{
    int i, acimaMedia, turma = 20;
    float media, soma = 0, notas[turma];
    
    printf("---MEDIA DE NOTAS---\n");
    for(i = 0; i < turma; i++){
        printf("Informe a nota do %dº aluno: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma / turma;
    
    for(i = 0; i < turma; i++){
        if(notas[i] > media){
            acimaMedia++;
        }
    }
    
    printf("\n---RESULTADO---\n");
    printf("A media da turma é: %.1f\n", media);
    printf("Total de alunos acima da media da turma: %d", acimaMedia);
  
    return 0;
}
