#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float saldo;//defini��o de vari�vel "saldo", no qual � um float, valor decimal de precis�o simples

    setlocale(LC_ALL,"Portuguese");

    printf("Caro usu�rio, informe o saldo da conta: \n");// o "\n" � para ter uma nova linha
    scanf("%f",&saldo); // o "%f" � uma forma de ser um tipo de dado onde f � float

    saldo=saldo*1.005; //processamento de dados simples, nunca esquecer o ";"

    printf("Seu resultado �: %.2f",saldo); //o "%.2f" � uma especifica��o de 2 casas decimais, para ter uma precis�o especificada no momento de expressar a vari�vel

    return 0;
}
