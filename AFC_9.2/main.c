#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 5
struct agenda
{
    char nome[50];
    char email[2][50];
    char cel[2][20];

};


int main()
{
    struct agenda pessoa[N];
    setlocale(LC_ALL,"Portuguese");
    for (int i=0; i<N; i++)
    {
        printf("Digite seu nome: ");
        fgets(pessoa[i].nome,sizeof(pessoa[i].nome),stdin);

        for(int j=0; j<2; j++)
        {
            printf("Digite seu %dº email: ",j+1);
            fgets(pessoa[i].email,sizeof(pessoa[i].email[j]),stdin);
        }
        for(int k=0; k<2; k++)
        {
            printf("Digite seu  %dº telefone: ",k+1);
            fgets(pessoa[i].cel,sizeof(pessoa[i].cel[k]),stdin);
        }
        system("cls");
    }
    for (int i=0; i<N; i++)
    {
        printf("\n%s\n", pessoa[i].nome);
        for (int j=0; j<2; j++)
        {
            printf("%s\n", pessoa[i].email[j]);
        }
        for (int k=0; k<2; k++)
        {
            printf("%s\n", pessoa[i].cel[k]);
        }
    }
    return 0;
}
