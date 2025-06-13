#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, qtd;
    char string[100], caractere;
    
    printf("---CONTADOR DE CARACTERE---\n");
    
    printf("\nENTRADA:\n");
    printf("Digite seu Texto: ");
    fgets(string, sizeof(string), stdin);
    
    printf("Informe o caractere a ser contado: ");
    scanf("%c", &caractere);
    
    for(i = 0; i < strlen(string); i++){
        if(string[i] == caractere || string[i] == toupper(caractere)){
            qtd++;
        }
    }
    
    printf("\n---RESULTADO---\n");
    printf("Texto: %s", string);
    printf("Nº de %c's: %d", caractere, qtd);
    
    return 0;
}
