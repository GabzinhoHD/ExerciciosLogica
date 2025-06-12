#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char string[100];
    
    printf("---MAIUSCULIZAÇÃO---\n");
    
    printf("\nENTRADA:\n");
    printf("Digite sua String: ");
    fgets(string, sizeof(string), stdin);
    
    for(i = 0; i < strlen(string); i++){
        string[i] = toupper(string[i]);
    }
    
    printf("\n---RESULTADO---\n");
    printf("SAÍDA: %s", string);
    
    return 0;
}
