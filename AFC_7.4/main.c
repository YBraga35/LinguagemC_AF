#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
char bissexto(ano);


int main()
{
    int ano;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um ano para ver se � bissexto:\n");
    scanf("%d", &ano);
    bissexto(ano);
    if (bissexto(ano)=='s')
    {
        printf("O ano de %d � bissexto!",ano);
    }
    else
    {
        printf("O ano de %d n�o � bissexto!",ano);
    }
    return 0;
}

char bissexto(ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        return 's';
    else
        return 'n';

}
