#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int x=2, *px, *py, y=3;
    setlocale(LC_ALL, "Portuguese");
    px = &x;
    py = &y;
    printf("Esse é o valor de x: %d\n", x);
    printf("Esse é o valor de y: %d\n\n", y);

    printf("Esse é o endereço de x: %d\n", &x);
    printf("Esse é o endereço de y: %d\n\n", &y);

    printf("Esse é o valor de px: %d\n", px);
    printf("Esse é o valor de py: %d\n\n", py);

    printf("Esse é o endereço de px: %d\n", &px);
    printf("Esse é o endereço de py: %d\n\n", &py);

    printf("\n\n- - - - - - - - - - - - - - - - -\n\n");
    printf("%d\t%d\n", x, y);
    printf("%d\t%d\n",*px,*py);
    printf("%d\t%d\n",&px,&py);

    printf("\n\n- - - - - - - - - - - - - - - - -\n\n");
    px = py;
    printf("%d %d \n%d %d \n\n%d %d \n%d %d", x, &x, px, *px, y, &y , py, *py);


    return 0;
}
