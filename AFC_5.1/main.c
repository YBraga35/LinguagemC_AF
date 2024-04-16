#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n[5],total=0;
    printf("Digite 5 valores para ver seu somatório: \n");
    for(int i=0;i<5;i++){
    scanf("%d",&n[i]);
    total=total+n[i];
    }
    printf("O somatório dos valores é %d",total);

    return 0;
}
