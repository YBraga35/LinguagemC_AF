#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void imprimir(float altura, float peso);

int main()
{
    float imc,peso,altura;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite seu altura e peso separados por vírgula:\n");
    scanf("%f%f", &altura, &peso);
    imprimir(altura,peso);
    return 0;
}

void imprimir(float altura, float peso)
{

    float imc = peso/pow(altura,2.0);
    printf("\n - - - - - - - - - - - -\n");
    printf("Seu IMC é: %.2f",imc);
    printf("\n - - - - - - - - - - - -\n");
}
