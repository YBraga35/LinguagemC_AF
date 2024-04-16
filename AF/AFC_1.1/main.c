#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float saldo;//definição de variável "saldo", no qual é um float, valor decimal de precisão simples

    setlocale(LC_ALL,"Portuguese");

    printf("Caro usuário, informe o saldo da conta: \n");// o "\n" é para ter uma nova linha
    scanf("%f",&saldo); // o "%f" é uma forma de ser um tipo de dado onde f é float

    saldo=saldo*1.005; //processamento de dados simples, nunca esquecer o ";"

    printf("Seu resultado é: %.2f",saldo); //o "%.2f" é uma especificação de 2 casas decimais, para ter uma precisão especificada no momento de expressar a variável

    return 0;
}
