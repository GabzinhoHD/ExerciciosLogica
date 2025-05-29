
#include <math.h>
#include <stdio.h>

int main()
{
	int tempS, hora, restoHora, minuto, seg;
	printf("Quantos segundos você quer converter? \n");
	scanf("%d", &tempS);
	hora = tempS / 3600;
	restoHora = hora % 3600;
	minuto = tempS / 60;
	seg = (rest)tempoS / 60;
	
	printf("%ds = %d : %d : %d", tempoS, hora, minuto, seg);
	return 0;
}
