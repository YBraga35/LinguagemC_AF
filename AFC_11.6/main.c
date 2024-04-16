#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int buscador (int f, int *v);

int main()
{
    int busca, vet[8]= {1,2,3,4,5,6,7,8};
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número a ser buscado no vetor: ");
    scanf("%d", &busca);
    return buscador (busca, vet);
}


int buscador (int f, int *v)
{
    for (int i = 0; i < 8; i++)
    {
        if (f == v[i])
        {
            printf("Valor igual encontrado: %d", f);
            return i;
        }
    }
    printf("Valor n]ao encontrado!");
    return -1;
}
