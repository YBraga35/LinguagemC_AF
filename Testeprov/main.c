#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salTemp, mais;
    printf("Digite um salário\n");
    scanf("%f", &salTemp);
    printf("\n\nDigite uma porcentagem para decrescer do salário:");
    scanf("%f", &mais);
    salTemp = salTemp - (salTemp*(mais/100));
    printf("Salário Final: %.2f", salTemp);
    return 0;
}
