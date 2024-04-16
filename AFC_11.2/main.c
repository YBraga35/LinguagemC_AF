#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mat[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%p\t", mat[i][j]);
        }
        printf("\n\n\n\n\n");
    }
    return 0;
}
