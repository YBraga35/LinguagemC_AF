#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nomes[2][35];
    float notas[2][3],soma[2]= {0,0},media[2];

    for (int i=0; i<2; i++)
    {
        printf("\nDigite seu nome: ");
        scanf("%s",&nomes[i]);
        printf("Digite suas notas das provas:\n");
        for (int j=0; j<3; j++)
        {
            scanf("%f",&notas[i][j]);
            soma[i]=soma[i]+notas[i][j];

        }
    }
    for (int k=0; k<2; k++)
    {
        media[k]=soma[k]/3;
        printf("\nO aluno %s teve média %.2f",nomes[k],media[k]);
    }

        return 0;
    }
