#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, tam = 0;
    char string[100], invertida[100];
    
    printf("---INVERSOR DE CARACTERE---\n");
    
    printf("\nENTRADA:\n");
    printf("Digite sua String: ");
    fgets(string, sizeof(string), stdin);
    
    tam = strlen(string) - 1;
    
    for(i = 0, j = tam; i < strlen(string); i++, j--){
        invertida[j] = string[i];
    }
    
    printf("\n---RESULTADO---\n");
    printf("SAÍDA: %s", invertida);
    
    return 0;
}
