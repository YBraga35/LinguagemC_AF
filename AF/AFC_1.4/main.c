#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    if (idade<14){
        printf("Categoria infantil");
            }
            else if (idade<18){
                printf("Categoria Juvenil");
            }
            else {
                printf ("Categoria sênior");
            }

    return 0;
}
