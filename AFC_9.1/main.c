#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 2

struct carro
{
    char marca [20];
    int fab;
    char cor[20];
    float preco;
};

int main()
{
    struct carro registro[N];
    setlocale(LC_ALL,"Portuguese");
    for (int i=0; i<N; i++)
    {
        printf("\nCarro %d:\n",i+1);
        printf("Digite a marca: ");
        fgets(registro[i].marca,sizeof(registro[i].marca),stdin);

        printf("Digite o ano de fabricação: ");
        scanf("%d", &registro[i].fab);
        getchar();

        printf("Digite a cor: ");
        fgets(registro[i].marca,sizeof(registro[i].cor),stdin);

        printf("Digite o preço separado por vírgula: ");
        scanf("%f", &registro[i].preco);
        getchar();
        system("cls");

    }
    for (int i=0; i<N; i++)
    {
        printf("\n\t///////////////////////////////////////\n");
        printf("\t//                                   //\n");
        printf("\t//             CARRO %d              //\n");
        printf("\t//                                   //\n");
        printf("\t///////////////////////////////////////\n");

        printf("\t\t- Marca ~> %s", registro[i].marca);
        printf("\t\t- Ano de Fabricação ~> %d", registro[i].fab);
        printf("\t\t- Cor ~> %s", registro[i].cor);
        printf("\t\t- Preço ~> %.2f", registro[i].preco);

        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    }
    return 0;
}
