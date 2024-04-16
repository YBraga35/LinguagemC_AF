#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 2

struct endereco{
    char rua[50];
    int numero;
};

struct pessoa{
    char cpf[20];
    char nome[50];
    float altura;
    struct endereco end;


};


int main()
{
    struct pessoa vetPessoa[N];

    setlocale(LC_ALL, "Portuguese");

    for(int i=0; i<N; i++){
        printf("\nInforme seu CPF: ");
        fgets(vetPessoa[i].cpf,sizeof(vetPessoa[i].cpf),stdin);

        printf("Informe seu nome: ");
        fgets(vetPessoa[i].nome,sizeof(vetPessoa[i].nome),stdin);

        printf("Informe sua altura: ");
        scanf("%f",&vetPessoa[i].altura);
        getchar();

        printf("Informe sua rua: ");
        fgets(vetPessoa[i].end.rua,sizeof(vetPessoa[i].end.rua),stdin);

        printf("Informe seu número: ");
        scanf("%d", &vetPessoa[i].end.numero);
        getchar();
        system("cls");
    }
    for(int j=0; j < N; j++){
        printf("\t%s", vetPessoa[j].cpf);
        printf("\t%s", vetPessoa[j].nome);
        printf("\t%.2f", vetPessoa[j].altura);
        printf("\t%s", vetPessoa[j].end.rua);
        printf("\t%d", vetPessoa[j].end.numero);
    }

    return 0;
}
