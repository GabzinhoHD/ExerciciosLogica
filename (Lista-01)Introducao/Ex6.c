#include <stdio.h>
int main(){
	float tamanhoArq, velConex, tempo;
	printf("Insira o tamanho do arquivo\n");
	scanf("%f", &tamanhoArq);
	printf("Insira a velocidade de conexão\n");
	scanf("%f", &velConex);
	tempo = tamanhoArq / velConex;
	printf("O tempo de download será %f", tempo);
	return 0;
}
