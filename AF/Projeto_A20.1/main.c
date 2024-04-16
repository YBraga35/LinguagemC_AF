#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaNum(int n1, int n2);

int main()
{
    int num1, num2, resultado;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe dois números para ver sua soma: \n");
    scanf("%d%d",&num1, &num2);
    resultado = somaNum(num1,num2);
    printf("Resultado da soma é: %d",resultado);
    return 0;
}

int somaNum(int n1, int n2)
{
    return (n1 + n2);

}
