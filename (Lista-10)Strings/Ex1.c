#include <stdio.h>
#include <string.h>

int main()
{
    char string1[40] = "lua", string2[40] = "cheia";
    
    printf("---CONCATENAÇÃO DE STRINGS(2º na 1º)---\n");

    printf("\nENTRADA:\n");
    printf("String1: %s  String2: %s\n", string1, string2);
    strcat(string1, string2);
    
    printf("\n---RESULTADO---\n");
    printf("String1: %s  String2: %s\n", string1, string2);
    
    return 0;
}
