#include <stdio.h>
#include <string.h>

int main()
{
	int result;
	char string1[100], string2[100];

	printf("---COMPARAÇAO DE STRINGS---\n");

	printf("\nENTRADA:\n");
	printf("Digite a 1ª String: ");
	fgets(string1, sizeof(string1), stdin);

    	printf("Digite a 2ª String: ");
    	fgets(string2, sizeof(string2), stdin);

	result = strcmp(string1, string2);

	printf("\n---RESULTADO---\n");
	printf("String 1: %s", string1);
	printf("String 2: %s", string2);
	
	if(result == 0) printf("Resultado: são iguais");
	else printf("Resultado: são diferentes");

	return 0;
}
