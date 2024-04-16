#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i=10;

    while (i<=20){
        printf("%d\n",i);
        i++;
    }

    return 0;
}
