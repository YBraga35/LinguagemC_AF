#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float matriz[3][3],diag [3];
    printf("Digite valores para preencher uma matriz, e depois verá os elementos de sua diagonal principal: \n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%f",&matriz[i][j]);
        }
    }
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (j+2==i)
                printf("%.2f\n",matriz[i][j]);
            else if (i==j && i==1)
                printf("\t%.2f\n",matriz[i][j]);
            else if (j-2==i)
                printf("\t\t%.2f\n",matriz[i][j]);
        }
    }
                return 0;
}
