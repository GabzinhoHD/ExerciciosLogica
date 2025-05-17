
#include <stdio.h>

int main()
{
	float distancia, combustivel, consumo;
	printf("Qual foi a distancia percorrida?\n");
	scanf("%f", &distancia);
	printf("Quantos litros de combustivel gastou?\n");
	scanf("%f", &combustivel);
	
	consumo = distancia / combustivel;
	printf("%f foi o consumo medio em km/l", consumo);
	return 0;
}

