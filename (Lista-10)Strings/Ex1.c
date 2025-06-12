#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100] = "lua", string2[100] = "cheia";
    
    printf("---CONCATENAÇÃO DE STRINGS(2º na 1º)---\n");

    printf("\nEntrada:\n");
    printf("String1: %s  String2: %s\n", string1, string2);
    strcat(string1, string2);
    
    printf("\n---RESULTADO---\n");
    printf("String1: %s  String2: %s\n", string1, string2);
    
    return 0;
}
