#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um n�mero maior que 0: \n");
    scanf("%d",&n);
    if (n>0) {
    if (n%2==0){
        printf("Seu n�mero � par");
    }
    else {
        printf("Seu n�mero � �mpar");
    }
    }
    return 0;
}
