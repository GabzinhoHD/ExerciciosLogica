
#include <stdio.h>

int main()
{
	float totalVendas, valorComissao;
	printf("Insira o total de vendas:\n");
	scanf("%f", &totalVendas);
	
	valorComissao = totalVendas * 0.1;
	printf("A comissão é de: %f",valorComissao);
	return 0;
}

