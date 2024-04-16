#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    char sexo;
    float altura,peso;
    setlocale(LC_ALL,"Portuguese");
    printf("Escreva seu sexo em 'M' ou 'F': \n");
    scanf ("%s", &sexo);
    printf("Escreva sua altura separada por ',': \n");
    scanf ("%f", &altura);

    switch (sexo)
    {
    case 'M':
        peso=(72.7*altura) - 58.0;
        printf("Seu peso ideal é %.2fKg",peso) ;
        break;
    case 'm':
        peso=(72.7*altura) - 58.0;
        printf("Seu peso ideal é %.2fKg",peso) ;
        break;
    case 'F':
        peso= (62.1*altura) - 44.7;
        printf("Seu peso ideal é %.2fKg",peso) ;
        break;
    case 'f':
        peso= (62.1*altura) - 44.7;
        printf("Seu peso ideal é %.2fKg",peso) ;
        break;
    }
    return 0;
}
