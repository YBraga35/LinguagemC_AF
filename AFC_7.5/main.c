#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void decres(int n1, int n2, int n3);

int main()
{
    int num1,num2,num3;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite três inteiros para ver o maior e menor:\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    decres(num1,num2,num3);
    return 0;
}


void decres(int n1, int n2, int n3)
{
    if ((n1 > n2) && (n2 > n3))
    {
        printf("O número %d é maior que %d. E %d é o menor desses.", n1, n2, n3);
    }
    else if ((n1 > n3) && (n3 > n2))
    {
        printf("O número %d é maior que %d. E %d é o menor desses.", n1, n3, n2);

    }
    else if ((n2 > n1) && (n1 > n3))
    {
        printf("O número %d é maior que %d. E %d é o menor desses.", n2, n1, n3);

    }
    else if ((n2 > n3) && (n3 > n1))
    {
        printf("O número %d é maior que %d. E %d é o menor desses.", n2, n3, n1);

    }
    else if ((n3 > n1) && (n1 > n2))
    {
        printf("O número %d é maior que %d. E %d é o menor desses.", n3, n1, n2);

    }
    else if ((n3 > n2) && (n2 > n1))
    {
        printf("O número %d é maior que %d. E %d é o menor desses.", n3, n2, n1);

    }
}
