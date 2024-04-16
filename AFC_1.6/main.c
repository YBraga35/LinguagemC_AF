#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i=1;
    float n;
    printf("Digite um número para ver sua tabuada: \n");
    scanf ("%f",&n);
    do {
    printf("%.2f x %d = %.2f \n",n,i,n*i);
    i++;

    }
    while (i<=10);

    return 0;
}
