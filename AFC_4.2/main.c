#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char item;
    int estoque=0, pedido=0,total;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe o nome do item a ser pedido, quantos h� no estoque e quantos voc� deseja: \n");
    scanf("%s %d %d",&item,&estoque,&pedido);
    if (estoque>pedido){
            total=estoque-pedido;
        printf("O seu pedido � suficiente, h� %d %s no estoque e sobram nele %d",estoque,item,total);
    }
    else {
        total = pedido-estoque;
            printf("O seu pedido � excedente, h� %d %s no estoque e faltam nele %d",estoque,item,total);

    }






    setlocale(LC_ALL,"Portuguese");
    return 0;
}
