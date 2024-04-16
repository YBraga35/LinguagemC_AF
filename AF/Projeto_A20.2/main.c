#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char eVogal (char l);
int main()
{
    char letra;

    setlocale(LC_ALL,"Portuguese");
    printf("Digite uma letra para ver se é vogal ou não: \n");
    scanf("%c",&letra);
    printf("\n%c é uma vogal?\n%c\n\n",letra,eVogal(letra) );
    return 0;
}


char eVogal (char l)
{
    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u'
            || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U')
    {
        return 'S';
    }
    else
    {
        return 'N';
    }

}
