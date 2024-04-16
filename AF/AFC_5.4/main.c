#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vet[8]= {1,2,3,4,5,6,7,8},menor=0,maior=0;
    for (int i=0; i<8; i++)
    {
        if(i==1)
        {
            menor=maior;
        }
        if(vet[i]<menor)
        {
            menor=vet[i];
        }
        else if (vet[i]>maior)
        {
            maior=vet[i];

        }
    }
    printf("Maior elemento do vetor é %d e o menor é %d",maior,menor);

    return 0;
}
