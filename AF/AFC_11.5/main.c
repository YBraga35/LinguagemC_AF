#include <stdio.h>
#include <stdlib.h>

void preenche (char *car, char l, int t);

int main()
{
    char caracteres[5];
    preenche (caracteres,'a', 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%c\t", caracteres[i]);
    }
    return 0;
}


void preenche (char *car, char l, int t)
{
    for (int i = 0; i < t; i++)
    {
        car[i] = l;
    }
}
