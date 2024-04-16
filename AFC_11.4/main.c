#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void imprime(int *vet);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor [5];
    printf("Digite 5 valores inteiros para popular um vetor e ver o seu dobro: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    imprime(vetor);
    return 0;
}

void imprime (int *vet)
{
    printf("\n\nVeja agora os endereços de memória dos elementos pares:\n");
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%p\n", &vet[i]);
        }
    }
}
