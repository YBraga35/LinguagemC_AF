#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int matriz[5][5];
    setlocale(LC_ALL,"Portuguese");
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if (i==j)
            {
                matriz[i][j]=1;

            }
            else
            {
                matriz[i][j]=0;
            }
            if (j==0)
            {
                printf("\n\n\n\t%d\t",matriz[i][j]);
            }
            else
            {
                printf("%d\t",matriz[i][j]);
            }
        }
    }
    printf("\n\n\n");
    return 0;
}
