#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int cubo(int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um n�mero para ver seu quadrado:\n");
    scanf("%d",&num);
    cubo(num);
    return 0;
}


int cubo (int n)
{
    int cb = n*n*n;
    printf("\n - - - - - - - - - - - - - - - -\n");
    printf("%d elevado ao cubo � igual a %d",n,cb);
    printf("\n - - - - - - - - - - - - - - - -\n");
}
