#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um número maior que zero para ver uma contagem regressiva: \n");
    scanf("%d",&n);
    printf("Contagem regressiva: \n - - - - - - -  - - \n");
    if (n>0)
    {
        while (n>=0)
        {
            printf ("%d \n",n);
            n--;
        }
    }
    else
        printf("Você digitou um número negativo ou zero");

    return 0;
}
