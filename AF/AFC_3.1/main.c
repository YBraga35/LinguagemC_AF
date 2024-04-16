#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    int ano,idade;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite seu ano de nascimento: \n");
    scanf("%d",&ano);
    idade=2023-ano;
    if (idade<16){
        printf("Você não pode votar e tirar carteira de habilitação.");
    }
    else if (idade <18) {
        printf("Você pode votar, mas não pode tirar sua carteira de habilitação.");
    }
    else {
        printf("Você pode votar e tirar a carteira de habilitação.");
    }
    return 0;
}
