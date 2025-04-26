
#include <math.h>
#include <stdio.h>

int main()
{
	int valor, milhar,restoMilhar, centena, restoCentena, dezena, restoDezena, unidade, soma;
	printf("Insira um valor positivo de 4 algarismos:\n");
	scanf("%u", &valor);
	milhar = valor / 1000;
	restoMilhar = valor % 1000;
	centena = restoMilhar / 100;
	restoCentena = restoMilhar % 100;
	dezena = restoCentena / 10;
	restoDezena = restoCentena % 10;
	unidade = restoDezena / 1;
	
	soma = milhar + centena + dezena + unidade;
	printf("A soma dos 4 algarismos do numero %d é: %d", valor, soma);
	return 0;
}
