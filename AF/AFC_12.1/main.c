#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char busca[80];
    int quebra,
    printf("Digite um nome de arquivo: ");
    scanf("%s", busca);
    strcat(busca, ".txt");
    FILE *arquivo = fopen(busca, "r");
    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo.\n");
        system("pause");
        exit(1);
    }
    while(quebra = fgetc(arquivo) != EOF)
    {
        quebrou = 1;
        if (quebra = '\n') quebra++;
    }



    return 0;
}
