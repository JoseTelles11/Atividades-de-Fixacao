#include <stdio.h>
int main()
{
    float orcamento;

    printf("Digite o orçamento: ");
    scanf("%d", &orcamento);

    if (orcamento >= 10000)
    {
        printf("João e Maria vão fazer uma viagem internacional.\n");
    }
    else
    {
        printf("João e Maria vão fazer uma viagem nacional.\n");
    }
    return 0;
}