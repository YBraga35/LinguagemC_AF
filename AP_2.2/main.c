#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 3

struct livraria
{
    char nome[80];
    char editora[80];
    char autor[80];
    float preco;
} livro[N];
int main()
{
    float maior=0;
    int imaior=0;
    for (int i=0; i<N; i++)
    {
        printf("Digite o nome, editora, autor e preço dos livros:\n");
        printf("Livros digitados: %d/%d\n", i, N);
        printf(" - Nome ~> ");
        fgets(livro[i].nome, 80, stdin);
        printf(" - Editora ~> ");
        fgets(livro[i].editora, 80, stdin);
        printf(" - Autor ~> ");
        fgets(livro[i].autor, 80, stdin);
        printf(" - Preço ~> ");
        scanf("%f", &livro[i].preco);
        if (maior < livro[i].preco)
        {
            maior = livro[i].preco;
            imaior = i;
        }
        system("cls");
        getchar();
    }
    printf("O livro de maior preço tem os seguintes dados:\n");
    printf(" - Nome ~> ", livro[imaior].nome);
    printf(" - Editora ~> ", livro[imaior].editora);
    printf(" - Autor ~> ",livro[imaior].autor);
    printf(" - Preço ~> \n", livro[imaior].preco);
    system("pause");

    return 0;
}
