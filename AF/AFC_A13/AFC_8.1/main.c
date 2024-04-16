#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibeMenu();
void cadastraLivro();
void listaLivros();
char matLivros [10][80];
int i=0;

int main()
{
    int opt;
    setlocale(LC_ALL,"Portuguese");
    do
    {
        exibeMenu();
        printf("Informe a opção desejada:\n");
        scanf("%d", &opt);
        if (opt == 1)
        {
            cadastraLivro();
            i++;
        }
        else if (opt == 2)
        {
            if (i != 0)
            {
                listaLivros();
            }
            else
            {
                printf("\n\n\t\tNÃO HÁ LIVROS CADASTRADOS\n");
                printf("\tFaça o cadastro do primeiro livro:\n\n");
                cadastraLivro();
                i++;
            }
        }
    }
    while (opt != 3);

    return 0;
}

void exibeMenu()
{
    printf("\n\n//////////////////////////////\n");
    printf("    GERÊNCIA DE BIBLIOTECA    \n");
    printf("//////////////////////////////\n\n\n");
    printf("OPÇÕES DO MENU:\n");
    printf("  1 - Cadastrar livro\n");
    printf("  2 - Listar Títulos Cadastrados\n");
    printf("  3 - Sair\n\n");
}

void cadastraLivro()
{
    getchar();
    printf("\t- - - - - - - - - - - - - - - - - - - -\n");
    printf("\t\tDigite o título do livro:\n");
    printf("\t- - - - - - - - - - - - - - - - - - - -\n");
    printf("\t");
    fgets (matLivros[i],80,stdin);
}


void listaLivros()
{
    if (matLivros[0] == 0)
    {
        printf("\nNão há livros cadastrados\n\n");
    }
    else
    {
        printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
        printf("\t\tLista de Livros cadastrados no acervo:\n");
        printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - -\n");

        for (int j=0; j<10; j++)
        {
            printf("\t%s",matLivros[j]);
        }
        printf("\n\n\t\t\t\tFIM DO ACERVO\n\n");
    }
}
