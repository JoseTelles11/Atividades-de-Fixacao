#include <stdio.h>
int main()
{
    float salario, bonus, salarioFinal;
    int percentual;

    printf("Digite o salário: R$ ");
    scanf("%f", &salario);

    if (salario < 3000)
    {
        percentual = 10;
        bonus = salario * 0.10;
    }
    else
    {
        percentual = 5;
        bonus = salario * 0.05;
    }
    salarioFinal = salario + bonus;

    printf("Salário original: R$ %.2f\n", salario);
    printf("Percentual: R$ %.2f\n", percentual);
    printf("Bônus salarial: R$ %.2f\n", bonus);
    printf("Salário final: R$ %.2f\n", salarioFinal);
}