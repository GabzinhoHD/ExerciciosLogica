
#include <stdio.h>

int main()
{
	float comprimento, largura, preco, sala, valor;
	printf("Qual o comprimento da sala(em metros)\n");
	scanf("%f", &comprimento);
	printf("Qual a largura da sala(em metros)\n");
	scanf("%f", &largura);
	sala = comprimento * largura;
	printf("Qual o preço do carpete por metro?\n");
	scanf("%f",&preco);
	valor = preco * sala;
	printf("O valor do carpete sera de: %f", valor); 
	return 0;
}

