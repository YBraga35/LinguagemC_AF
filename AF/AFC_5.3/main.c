#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vet[6]= {30,11,48,50,39,36},teste[6],acertos=0;
    printf("Digite um número para ver se acertou na loteria (01~60):\n");
    for (int i=0; i<6; i++)
    {
        scanf("%d",&teste[i]);
    }
    acertos=0;
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            if (teste[i]==vet[j]){
                printf("Acertou o número %d que é o elemento %d do vetor",teste[i],j);
            acertos++;
            }
        }
    }
    if (acertos==0)
        printf("Você não acertou nenhum número!");
    else
        printf("\nNo total teve %d acertos!!",acertos);


    return 0;
}
