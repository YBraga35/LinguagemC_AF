#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    float val, total;
    char nome [10];
    int vendas;
    setlocale(LC_ALL,"Portuguese");


    printf("Digite seu nome e o valor total das vendas separado por ',': \n");
    scanf("%s %f",&nome, &val);
    printf("Digite o n�mero de vendas realizadas\n");
    scanf("%d",&vendas);

    total= 700+80*vendas+0.04*val;

    printf("Seu sal�rio final de %s, �: %2.f",nome, total);



    return 0;
}
