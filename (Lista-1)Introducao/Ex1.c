


#include <stdio.h>

int main()
{
	int adicao, subtracao, multiplicacao, divisao, a, b;
	printf("Insira dois valores\n");
	scanf("%d %d", &a, &b);
	
	adicao = a + b;
	subtracao = a - b;
	multiplicacao = a * b;
	divisao = a / b;
	
	printf("soma: %d\n", adicao);
	printf("subtração: %d\n", subtracao);
	printf("multiplicação: %d\n", multiplicacao);
	printf("divisão: %d\n", divisao);
	return 0;
}

