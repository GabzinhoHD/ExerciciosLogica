#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char string1[100] = "lua", string2[100] = "cheia";
    
    printf("---CONCATENAÇÃO DE DUAS STRINGS---\n");
    
    printf("String1: %s\nString2: %s\n", string1, string2);
    strcat(string1, string2);
    
    printf("\n---RESULTADO---\n");
    printf("String1: %s\nString2: %s\n", string1, string2);
    
    return 0;
}
