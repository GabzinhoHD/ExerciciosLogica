
#include <stdio.h>

int main()
{
    float pagamento, parcela;
    printf("Insira o valor do pagamento:\n");
    scanf("%f", &pagamento);
    parcela = pagamento / 5;
    printf("Compra parcelada\n 5 x %.2f = %.2f", parcela, pagamento);

    return 0;
}
