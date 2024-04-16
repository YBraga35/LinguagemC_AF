#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float capTanque, litAbast, rendimento, distancia, autonomia;
    setlocale(LC_ALL, "portuguese");

    do
    {
        printf("Digite sua capacidade do tanque de gasolina: ");
        scanf("%f", &capTanque);
        system("cls");
    }
    while (capTanque < 30);
    do
    {
        printf("Digite quantos livros a abastecer: ");
        scanf("%f", &litAbast);
        system("cls");
    }
    while (litAbast < 1 || litAbast > capTanque);
    do
    {
        printf("Digite a média de Km por litro de gasolina: ");
        scanf("%f", &rendimento);
        system("cls");
    }
    while (rendimento < 1);
    do
    {
        printf("Digite a quilometragem que deseja percorrer: ");
        scanf("%f", &distancia);
        system("cls");
    }
    while (distancia < 1);

    autonomia = rendimento*litAbast;
    printf("\n\nAutonomia do carro é: %.2f\n\n", autonomia);
    if (distancia > autonomia)
    {
        printf("Não é possível percorrer a distância informada, gasolina insuficiente");
    }
    else if (distancia < autonomia)
    {
        printf("É possível percorrer a distância informada, gasolina irá sobrar");
    }
    else
    {
        printf("É possível percorrer a distância informada, autonomia exata");
    }

    return 0;
}
