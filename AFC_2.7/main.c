#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char op;
    float x,y;

    printf("Digite um valor, a operação a ser realizada e o outro valor: \n");
    scanf("%f %s %f", &x,&op,&y);
    switch (op)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",x,y,x+y);
    case '-':
        printf("%.2f - %.2f = %.2f",x,y,x-y);
    case '*':
        printf("%.2f x %.2f = %.2f",x,y,x*y);
    case 'x':
        printf("%.2f x %.2f = %.2f",x,y,x*y);
    case '/':
        printf("%.2f / %.2f = %.2f",x,y,x/y);

    }


    return 0;
}
