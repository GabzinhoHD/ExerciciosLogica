#include <stdio.h>

int main()
{
	float dolarCotacao, dolarValor, realValor;
	printf("Insira o valor a converter:\n");
	scanf("%f", &dolarValor);
	printf("Insira a cotação\n");
	scanf("%f", &dolarCotacao);
	realValor = dolarValor * dolarCotacao;
	printf("O valor em real é: %f", realValor);
	return 0;
}
