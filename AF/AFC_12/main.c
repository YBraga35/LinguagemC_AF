#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("exemploarq2.txt", "r");
    char nome[2][30];
    int idade[2], i=0;
    float altura[2];

    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo.\n");
        system("pause");
        exit(1);
    }
    printf("%-30s %-10s %-10s", "Nome", "Idade", "Altura");
    printf("\n");

    while (fscanf(arquivo, " %[^;];%d;%f\n", nome[i], &idade[i], &altura[i]) != EOF){
        printf("%-30s %-10d %-10.2f\n", nome[i], idade[i], altura[i]);
        i++;
    }
    fclose(arquivo);
    return 0;
}
