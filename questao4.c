#include <stdio.h>
int main()
{
    float conta, desconto, valorFinal;
    printf("Digite o valor da conta: R$ ");
    scanf("%f", &conta);

    if (conta >= 500)
    {
        desconto = conta * 0.15;
    }
    else
    {
        desconto = conta * 0.05;
    }

    valorFinal = conta - desconto;

    printf("Valor original: R$ %.2f\n", conta);
    printf("valor do desconto: R$ %2.f\n", desconto);
    printf("valor final: R$ %2.f\n", valorFinal);

    return 0;
}