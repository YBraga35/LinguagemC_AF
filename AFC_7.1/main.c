#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada(int num);

int main()
{
    int n;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um valor para ver sua tabuada:\n");
    scanf("%d",&n);
    tabuada(n);
    return 0;
}

void tabuada (int num)
{
    for (int i=0; i < 10; i++){
        printf("%d x %d = %d\n",num, i+1, num*(i+1));
    }
}
