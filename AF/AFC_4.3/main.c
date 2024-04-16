#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vendas;
    float sal,fim;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite seu salário base, e quantas vendas você fez: \n");
    scanf("%f %d",&sal,&vendas);
    if (vendas>100 && vendas <= 500)
    {
        fim=sal+50;
        printf("Seu salário final é: %.2f",fim);
    }
    else if (vendas>500 && vendas <= 750)
    {
        fim = sal+70;
        printf("Seu salário final é: %.2f",fim);
    }
    else if (vendas>750)
    {
        fim = sal+100;
        printf("Seu salário final é: %.2f",fim);
    }
    else
    printf("Seu salário final é: %.2f",sal);

    return 0;
}
