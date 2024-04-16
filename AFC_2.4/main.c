#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n;
    int pos,neg,zero,i;
    printf("Digite 5 números para ver quais são positivos e quais são negativos: \n");
    pos=0;
    neg=0;
    zero=0;
    for (i=0; i<5; i++)
    {
        scanf("%f",&n);
        if (n>0)
            pos=pos+1;
        else if (n<0)
            neg=neg+1;
        else
            zero=zero+1;
    }
    printf("Você digitou %d números positivos, %d números negativos e %d zeros.", pos,neg,zero);
    return 0;
}
