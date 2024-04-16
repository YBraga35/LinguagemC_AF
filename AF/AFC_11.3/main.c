#include <stdio.h>
#include <stdlib.h>

void imprime(int *vet);
int main()
{
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
    printf("\n\nVeja agora seu dobro:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", (vet[i]*2));
    }
}
