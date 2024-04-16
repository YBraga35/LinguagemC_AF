#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int soma = 0, vetor[10]= {2,3,4,6,12,5,10,7,20,15};
    float media;
    setlocale(LC_ALL, "Portuguese");
    for (int i = 0; i < 10; i++)
    {
        soma = soma + vetor[i];
    }
    media = (soma/10);
    printf("Valores do vetor que excedem a média (%.2f):", media);
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > media)
        {
            printf("\n%d\n", vetor[i]);
        }
    }

    return 0;
}
