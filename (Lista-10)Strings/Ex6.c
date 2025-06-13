#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j;
    char string[100], invertida[100];
    
    printf("---INVERSOR DE CARACTERE---\n");
    
    printf("\nENTRADA:\n");
    printf("Digite seu Texto: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1] = '\0';
    
    for(i = 0, j = strlen(string) - 1 ; i < strlen(string); i++, j--){
        invertida[j] = string[i];
    }
    
    printf("\n---RESULTADO---\n");
    printf("SAÍDA: %s", invertida);
    
    return 0;
}
