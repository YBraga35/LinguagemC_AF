#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int vetA[10] = {11,13,17,19,23,29,31,37,41,43},vetB[10] = {1,2,3,4,5,6,7,8,9,10}, vetC[10];
    setlocale(LC_ALL,"Portuguese");
    printf("Os seguintes vetores possuem 10 elementos, sendo que o vetor C é a diferença do vetor 'a' e 'b':\n");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
    printf("Vetor A:");
    for (int i=0; i<10; i++)
    {
        printf("%d\t",vetA[i]);
    }
    printf("\nVetor B:");
    for (int i=0; i<10; i++)
    {
        printf("%d\t",vetB[i]);
    }
    printf("\nVetor C:");

    for (int i=0; i<10; i++)
    {
        vetC[i]=vetA[i] - vetB[i];
        printf("%d\t",vetC[i]);
    }
    printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    return 0;
}
