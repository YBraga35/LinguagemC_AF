#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibeMenu();
void cadastraLivro();
void listaLivros();
char livros[10][80];
int ind=0;

int main()
{
    int opt;
    setlocale(LC_ALL,"Portuguese");
    do
    {
        system("cls");
        exibeMenu();
        scanf("%d", &opt);
        if (opt == 1)
        {
            cadastraLivro();
            ind++;
        }
        else if (opt == 2)
        {
            listaLivros();
        }
    }
    while (opt != 3 && ind < 10);
    system("cls");
    printf("Veja agora a lista final dos livros cadastrados no acervo: \n\n");
    listaLivros();
    return 0;
}


void exibeMenu()
{
    printf("\n\t///////////////////////////////////////\n");
    printf("\t//                                   //\n");
    printf("\t//      GERÊNCIA DA BIBLIOTECA       //\n");
    printf("\t//                                   //\n");
    printf("\t///////////////////////////////////////\n");
    printf("\n  Opções de uso:\n  1 - Cadastrar Livro\n  2 - Listar Títulos Cadastrados\n  3 - Sair\n\t- ");
}

void cadastraLivro()
{
    if (ind<9)
    {
        printf("\n\t///////////////////////////////////////\n");
        printf("\t//                                   //\n");
        printf("\t//        CADASTRO DE LIVROS         //\n");
        printf("\t//                                   //\n");
        printf("\t///////////////////////////////////////\n");
        printf("\n  Digite o título do livro para adicionar ao acervo:\n  - ");
        getchar();
        fgets(livros[ind], 80, stdin);
    }
    else
    {
        printf("Você chegou à capacidade máxima do sistema");
    }

}
void listaLivros()
{
    int n;
    if (ind == 0)
    {
        printf("\n\n  !!!AINDA NÃO FORAM CADASTRADOS LIVROS NO ACERVO!!!\n\n");
    }
    else
    {
        printf("\n\t///////////////////////////////////////\n");
        printf("\t//                                   //\n");
        printf("\t//         LISTA DE LIVROS           //\n");
        printf("\t//                                   //\n");
        printf("\t///////////////////////////////////////\n");
        printf("\n\n\tAqui estão listados os livros do acervo:\n");
        printf("- - - - - - - - - - - - - - - - - - - - - - - -\n");
        for (int i=0; i<ind+1; i++)
        {
            printf("%s",livros[i]);
        }
        printf("- - - - - - - - - - - - - - - - - - - - - - - -\n\n");
    }
    system("pause");
}

