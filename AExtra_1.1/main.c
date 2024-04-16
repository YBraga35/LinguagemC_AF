#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    double x;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um valor para ver seu inteiro: \n");
    scanf("%lf", &x);
    printf("\n\nO inteiro do valor %lf é: %d", x, abs(x));
    return 0;
}
