#include <stdio.h>
#include <string.h>

int main()
{
    int i, qtd = 0;
    char string[100];
    
    printf("---CONTADOR DE O's---\n");
    
    printf("\nENTRADA:\n");
    printf("Digite seu Texto: ");
    fgets(string, sizeof(string), stdin);
    
    for(i = 0; i < strlen(string); i++){
        if(string[i] == 'o' || string[i] == 'O'){
            qtd++;
        }
    }
    
    printf("\n---RESULTADO---\n");
    printf("Texto: %s", string);
    printf("Nº de O's: %d", qtd);
    
    return 0;
}
