#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float ponderada(float n1, float n2, float n3);
float aritmetica(float n1, float n2, float n3);

int main()
{
    float num1,num2,num3, media;
    char op;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite suas notas separadas por ',': \n");
    scanf("%f%f%f", &num1, &num2, &num3);
    printf("Digite a forma como dever ser calculada sua média, se for ponderada 'p', se for aritmética 'a': \n");
    getchar();
    scanf("%c", &op);
    if (op == 'p')
    {
        media = ponderada(num1,num2,num3);
    }
    else if (op == 'a')
    {
        media = aritmetica (num1,num2,num3);
    }

    printf("Sua média calculada é %.2f", media);
    return 0;
}


float ponderada(float n1, float n2, float n3)
{
    float media;
    media = (5*n1 + 3*n2 + 2*n3)/10;
    return media;
}

float aritmetica(float n1, float n2, float n3)
{
    float media;
    media = (n1+n2+n3)/3;
    return media;
}

