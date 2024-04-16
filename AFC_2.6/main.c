#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n,soma;
    soma=0;
    printf("Digite valores para serem somados, quando quiser parar, entre 0: \n");
    do
    {
        scanf("%f",&n);
        soma=soma+n;
    }
    while (n!=0);
    printf("O somatório dos valores inseridos é: %.2f",soma);


    return 0;
}
