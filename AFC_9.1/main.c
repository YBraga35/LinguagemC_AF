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

        printf("Digite o ano de fabrica��o: ");
        scanf("%d", &registro[i].fab);
        getchar();

        printf("Digite a cor: ");
        fgets(registro[i].marca,sizeof(registro[i].cor),stdin);

        printf("Digite o pre�o separado por v�rgula: ");
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
        printf("\t\t- Ano de Fabrica��o ~> %d", registro[i].fab);
        printf("\t\t- Cor ~> %s", registro[i].cor);
        printf("\t\t- Pre�o ~> %.2f", registro[i].preco);

        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    }
    return 0;
}
