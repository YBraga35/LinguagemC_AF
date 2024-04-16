#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    int idade;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite sua idade: \n");
    scanf("%d",&idade);

    if (idade>4){
            if (idade<8) printf("Categoria Infantil A");
        else if (idade<11) printf ("Categoria Infantil B");
        else if (idade<14) printf("Categoria Juvenil A");
        else if (idade <18) printf ("Categoria Juvenil B");
        else printf ("Categoria Adulto");
    }

    return 0;
}
