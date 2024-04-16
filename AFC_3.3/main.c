#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    float x,y,z;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite os valores para os lados de um triângulo: \n");
    scanf("%f %f %f", &x, &y, &z);

    if (x+y>z && x+z>y && y+z>x){
            printf("Seu triângulo é ");
            if (x!=y && y!=z && x!=z) printf("Escaleno");
            else if ((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x)){
                printf ("Isóceles");
            }
            else printf ("Equilátero");



    }
    else printf("Não é um triângulo");

    return 0;
}
