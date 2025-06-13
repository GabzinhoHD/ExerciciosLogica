#include <stdio.h>
#include <string.h>

int main()
{
    int i, tam[3];
    char string1[100], string2[100], string3[100];
    
    printf("---CONCATENAÇÃO DE TEXTO---\n");
    
    printf("\nENTRADA:\n");
    printf("Informe a 1º Texto: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strlen(string1) - 1] = '\0';
    tam[0] = strlen(string1);
    
    printf("Informe a 2º Texto : ");
    fgets(string2, sizeof(string2), stdin);
    string2[strlen(string2) - 1] = '\0';
    tam[1] = strlen(string2);
    
    /* Concatenação com espaço entre as strings */
    strcpy(string3, string1);
    strcat(string3, " ");
    strcat(string3, string2);
    tam[2] = strlen(string3);
    
    printf("\n---RESULTADO---\n");
    printf("Texto 1: %s\n", string1);
    printf("Texto 2: %s\n", string2);
    printf("Texto Concatenado: %s\n", string3);
    printf("Tamanhos:");
    for(i = 0; i < 3; i++){
        printf(" [%d] ", tam[i]);
    }
    
    return 0;
}
