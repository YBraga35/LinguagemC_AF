#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculaAreaRetangulo(float altura, float largura);

int main()
{
    float alt, larg, controle = 0;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        if (controle > 0)
        {
            printf("! ! A ALTURA DEVE SER MAIOR QUE 0 ! !\n\n");
        }
        printf("Digite a altura de um retângulo - ");
        scanf("%f", &alt);
        controle ++;
        system("cls");
    }
    while (alt <= 0);
    controle = 0;
    do
    {
        if (controle > 0)
        {
            printf("! ! A LARGURA DEVE SER MAIOR QUE 0 ! !\n\n");
        }
        printf("Agora sua largura - ");
        scanf("%f", &larg);
        controle ++;
        system("cls");
    }
    while (larg <= 0);
    printf("\n\nA área do retângulo é: %.2f\n\n", calculaAreaRetangulo(alt, larg));
    return 0;
}

float calculaAreaRetangulo(float altura, float largura)
{
    return (altura*largura);
}
