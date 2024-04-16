#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int divd,divs,quoc=0;
    printf("Digite o dividendo e o divisor: \n");
    scanf("%d %d",&divd,&divs);
    do{
        divd=divd-divs;
    quoc++;

    }
    while (divd!=0);
    printf("Seu resultado é %d",quoc);


    return 0;
}
