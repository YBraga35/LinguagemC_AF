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
        case 'M': printf("Seu sexo é Masculino"); break;
        case 'F': printf("Seu sexo é Feminino"); break;
        case 'm': printf("Seu sexo é Masculino"); break;
        case 'f': printf("Seu sexo é Feminino"); break;
        default: printf("Opção Inválida");
            }
    return 0;
}
