#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salTemp, mais;
    printf("Digite um sal�rio\n");
    scanf("%f", &salTemp);
    printf("\n\nDigite uma porcentagem para decrescer do sal�rio:");
    scanf("%f", &mais);
    salTemp = salTemp - (salTemp*(mais/100));
    printf("Sal�rio Final: %.2f", salTemp);
    return 0;
}
