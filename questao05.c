#include <stdio.h>
int main()
{
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura < 15)
    {
        printf("Temperatura baixa");
    }
    else
    {
        printf("Temperatura normal ou elevada");
    }
    return 0;
}