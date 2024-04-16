#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vet[5];
    printf("Digite 5 valores para serem lidos em um vetor:\n");
    for (int i=0;i<5;i++){
        scanf("%d",&vet[i]);
    }
    printf("Agora seus números em ordem inversa:\n");
    for(int j=4;j>=0;j--){
        printf("%d\n",vet[j]);
    }



    return 0;
}
