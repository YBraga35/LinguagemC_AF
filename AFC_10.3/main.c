#include <stdio.h>
#include <stdlib.h>

void ordena(int *x, int *w, int *y);

int main()
{
    int x, w, y, igual = 0;

    do
    {
        if (igual != 0) printf("\t!! DIGITE VALORES DIFERENTES PARA X, W E Z!!\n\n");
        printf("Informe os valores para x, w e y: \n");
        scanf("%d%d%d", &x, &w, &y);
        if (x == w || x == y || y == w)
        {
            system("cls");
            igual = 1;
        }
    }
    while (igual != 0);
    ordena(&x,&w,&y);
    printf("x = %d || w = %d || y = %d", x, w, y);

    return 0;
}


void ordena(int *x, int *w, int *y)
{
    int aux;
    if (*x > *w)
    {
        aux = *w;
        *w = *x;
        *x = aux;
    }
    if (*w > *y)
    {
        aux = *y;
        *y = *w;
        *w = aux;
    }
    if (*x > *w)
    {
        aux = *w;
        *w = *x;
        *x = aux;
    }
}
