#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    char sexo;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a letra do seu sexo em 'M' ou 'F':");
    scanf("%s", &sexo);


    switch ( sexo ){
        case 'M': printf("Seu sexo � Masculino"); break;
        case 'F': printf("Seu sexo � Feminino"); break;
        case 'm': printf("Seu sexo � Masculino"); break;
        case 'f': printf("Seu sexo � Feminino"); break;
        default: printf("Op��o Inv�lida");
            }
    return 0;
}
