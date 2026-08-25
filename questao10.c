#include <stdio.h>
int main()
{
    int idade, anosEmpresa;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Quantos anos você tem de empresa?");
    scanf("%d", &anosEmpresa);

    if (idade >= 18 && anosEmpresa >= 1)
    {
        printf("Acesso Autorizado!\n");
    }
    else
    {
        printf("Acesso não autorizado!\n");
    }
    return 0;
}