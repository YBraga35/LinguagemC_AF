#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float vetNum[7];
    setlocale(LC_ALL,"Portuguese");
    printf("Digite 7 valores reais (com v�rgula) e veja se repetiu algum:\n");
    for (int i=0; i<7; i++)
    {
        scanf("%f",&vetNum[i]);

    }
    printf("Agora veja se algum valor est� repetido:\n\n");
    for (int i=0; i<7; i++)
    {
        for (int j=0; j<7; j++)
        {

            if (i!=j && vetNum[i]==vetNum[j] && i<j)
            {
                printf("Voc� digitou %f repetidamente\n",vetNum[i]);
                return 0;
            }

        }
    }
    printf("Seu vetor n�o possui repeti��es!");

    return 0;
}
