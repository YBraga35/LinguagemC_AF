#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um n�mero de 1 a 7 para ver seu dia correspondente na semana: ");
    scanf("%d", &n);
    if(n<1 || n>7)
    {
        printf("N�mero inv�lido, deve ser entre 1 e 7");
    }
    else
    {
        switch (n)
        {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Ter�a-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("S�bado");
            break;
        }
    }

    return 0;
}
