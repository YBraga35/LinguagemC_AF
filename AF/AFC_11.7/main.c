#include <stdio.h>
#include <stdlib.h>

char procura (char *m, char *b);

int main()
{
    char matriz [5][15], busca[15];
    printf("Digite 5 palavras para popular uma matriz: \n");
    for (int i = 0; i<5; i++)
    {
        fgets(matriz[i], 15, stdin);
    }
    system("cls");
    printf("\n\nDigite agora uma palavra para buscar no vetor: ");
    fgets(busca, 15, stdin);
    printf("%c", procura(matriz, busca));
    return  0;
}


char procura (char *m, char *b)
{
    for (int i = 0; i<5; i++)
    {
        if (m[i] == b)
        {
            return 'S';
        }
    }
    return 'N';
}
