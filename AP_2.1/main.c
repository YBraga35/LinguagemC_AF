#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 6
struct produtos
{
    char nome[80];
    float preco;
} prod[N];

int main()
{
    float ptotal=0, maior=0, menor=0;
    int imaior, imenor;
    setlocale(LC_ALL, "Portuguese");
    for (int i=0; i<N; i++)
    {
        printf("Digite os nomes e valores de 6 produtos para ver sua média e o mais caro deles:\n");
        printf("Produtos digitados: %d/%d", i, N);
        printf(" - Nome ~> ");
        getchar();
        fgets(prod[i].nome, 80, stdin);
        printf(" - Preço ~> ");
        scanf("%f", &prod[i].preco);
        ptotal = ptotal + prod[i].preco;
        system("cls");
    }
    for (int i=0; i<N; i++)
    {
        if (prod[i].preco > maior)
        {
            maior = prod[i].preco;
            imaior = i;
        }
        if (i==0) menor = maior;
        if (prod[i].preco < menor)
        {
            menor = prod[i].preco;
            imenor = i;
        }
    }

    printf("\n\nO produto de menor valor é: %s\n", prod[imenor].nome);
    printf("\te ele custa: R$ %.2f\n\n", prod[imenor].preco);

    printf("O produto de maior valor é: %s\n", prod[imaior].nome);
    printf("\te ele custa: R$ %.2f\n\n", prod[imaior].preco);

    printf("A média dos valores dos produtos é: %f", ptotal/N);
    return 0;
}
