#include <stdio.h>
int main()
{
    float compra, desconto, valorFinal;
    int percentual;

    printf("Digite o valor da compra: ");
    scanf("%f", &compra);

    if (compra >= 500)
    {
        percentual = 15;
        desconto = compra * 0.15;
    }
    else
    {
        percentual = 5;
        desconto = compra * 0.05;
    }

    valorFinal = compra - desconto;

    printf("Valor original: R$ %.2f\n", compra);
    printf("Percentual do desconto:  %d%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);
    return 0;
}