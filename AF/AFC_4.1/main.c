#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float diaria, promo, totaln,totalp;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor da sua diária em reais, separado por vírgula: \n");
    scanf("%f",&diaria);
    promo=diaria*0.75;
    totaln=80*0.5*diaria;
    totalp=80*0.8*promo;
    printf("O valor da diária promocional é R$%.2f \n",promo);
    printf("Se estiverem ocupados  80%% dos apartamentos o valor total arrecadado em um final de semana é: R$%.2f, considerando o valor promocional \n",totalp);
    printf("Se estiverem ocupados  50%% dos apartamentos o valor total arrecadado em um final de semana é: R$%.2f, considerando o valor normal \n",totaln);


    return 0;
}
