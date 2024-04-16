#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    float vetor[T];
    for (int i=0; i<T; i++)
    {
        printf("%p\n", &vetor[i]);
    }

    return 0;
}
