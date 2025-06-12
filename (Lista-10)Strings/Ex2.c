#include <stdio.h>
#include <string.h>

int main()
{
    int i, tam[3];
    char string1[100], string2[100], string3[100];
    
    printf("---CONCATENAÇÃO DE STRINGS---\n");
    
    printf("Informe a primeira String: ");
    fgets(string1, sizeof(string1), stdin);
    tam[0] = strlen(string1) - 1;
    
    printf("Informe a segunda String: ");
    fgets(string2, sizeof(string2), stdin);
    tam[1] = strlen(string2) - 1;
    
    /* Concatenação com espaço entre as strings */
    strcpy(string3, string1);
    strcat(string3, " ");
    strcat(string3, string2);
    tam[2] = strlen(string3) - 1;
    
    printf("\n---RESULTADO---\n");
    printf("String1: %s\n", string1);
    printf("String2: %s\n", string2);
    printf("String3: %s\n", string3);
    printf("Tamanhos:");
    for(i = 1; i <= 3; i++){
        printf("[%d] ", tam[i-1]);
    }
    
    return 0;
}
