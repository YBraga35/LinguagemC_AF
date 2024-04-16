#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int result(int n);

int main()
{
    int num, impar;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número inteiro positivo: \n");
    scanf("%d", &num);
    printf("%d", result(num));
    return 0;
}

int result(int n)
{
    if (n%2 == 0)
    {
        return 1;
    }
    else
        return 0;
}

