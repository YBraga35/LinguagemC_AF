#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int x=2, *px, *py, y=3;
    setlocale(LC_ALL, "Portuguese");
    px = &x;
    py = &y;
    printf("Esse � o valor de x: %d\n", x);
    printf("Esse � o valor de y: %d\n\n", y);

    printf("Esse � o endere�o de x: %d\n", &x);
    printf("Esse � o endere�o de y: %d\n\n", &y);

    printf("Esse � o valor de px: %d\n", px);
    printf("Esse � o valor de py: %d\n\n", py);

    printf("Esse � o endere�o de px: %d\n", &px);
    printf("Esse � o endere�o de py: %d\n\n", &py);

    printf("\n\n- - - - - - - - - - - - - - - - -\n\n");
    printf("%d\t%d\n", x, y);
    printf("%d\t%d\n",*px,*py);
    printf("%d\t%d\n",&px,&py);

    printf("\n\n- - - - - - - - - - - - - - - - -\n\n");
    px = py;
    printf("%d %d \n%d %d \n\n%d %d \n%d %d", x, &x, px, *px, y, &y , py, *py);


    return 0;
}
