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
        printf("Voc� n�o pode votar e tirar carteira de habilita��o.");
    }
    else if (idade <18) {
        printf("Voc� pode votar, mas n�o pode tirar sua carteira de habilita��o.");
    }
    else {
        printf("Voc� pode votar e tirar a carteira de habilita��o.");
    }
    return 0;
}
