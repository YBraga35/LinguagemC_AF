#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct funcionario
{
    char nome [50];
    int idade;
    char rua[50];
    int numero;
};

int main()
{
    struct funcionario f1,f3,f2 = {"Maria", 45, "Avenida Ipiranga", 7000};
    setlocale(LC_ALL,"Portuguese");

    // Lendo as entradas do struct
    printf("\n\nInforme seu nome: ");
    fgets(f3.nome,sizeof(f3.nome),stdin);
    printf("Informe sua idade: ");
    scanf("%d",&f3.idade);
    getchar();
    printf("Informe sua rua: ");
    fgets(f3.rua,sizeof(f3.rua),stdin);
    printf("Informe o seu número: ");
    scanf("%d", &f3.numero);
    system("cls");


    // Atribuindo valores ao struct agora
    strcpy (f1.nome,"Carlos");
    f1.idade = 44;
    strcpy (f1.rua,"Rua da UFCSPA");
    f1.numero = 245;

    // Imprimindo valores da estrutura
    printf("\n\n - Nome: %s\n - Idade: %d\n - Rua: %s\n - Número: %d",f1.nome, f1.idade, f1.rua, f1.numero);
    printf("\n\n - Nome: %s\n - Idade: %d\n - Rua: %s\n - Número: %d",f2.nome, f2.idade, f2.rua, f2.numero);
    printf("\n\n - Nome: %s - Idade: %d\n - Rua: %s - Número: %d",f3.nome, f3.idade, f3.rua, f3.numero);



    return 0;
}
