#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Dois dados lançados podem resultar em:\n - - - - - - - - - - - - - - - - - - -\n");
    int soma=0;
    for (int x=0; x<7; ++x)
    {
        for (int y=0; y<7; ++y)
        {

            if (x+y==7)
                printf ("Dado 1: %d | Dado 2: %d | %d + %d = 7\n",x,y,x,y);

        }
    }



    return 0;
}
