#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a,b,c,media,freq,mediaf,exame;
    printf("Digite a sua frequência em um número percentual, ou seja, se for 80%% você digitará '80.0': \n");
    scanf("%f", &freq);
    if (freq>=75)
    {
        printf("Digite suas 3 notas das avaliações: \n");
        scanf("%f%f%f",&a,&b,&c);
        media=(a+b+c)/3;
        if (media>=7)
        {
            printf("Você foi aprovado sem exame!");
        }
        else if (media>=4)
        {
            printf("Digite sua nota do exame final: \n");
            scanf("%f",&exame);
            mediaf=(media*0.6)+(exame*0.4);

            if (mediaf>=6)
                printf("Você foi aprovado depois do exame!");
            else
                printf("Você foi reprovado depois do exame!");
        }
        printf("Você foi reprovado antes do exame!");
        else printf("Você foi reprovado sem exame");
    }
    else
        printf("Você foi reprovado por falta!");

    return 0;
}
