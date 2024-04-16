#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um número maior que 0: \n");
    scanf("%d",&n);
    if (n>0) {
    if (n%2==0){
        printf("Seu número é par");
    }
    else {
        printf("Seu número é ímpar");
    }
    }
    return 0;
}
