#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float notas[5],media,soma=0.0;
    printf("Informe 5 notas: \n");
    for (int i=0;i<5;i++){
    scanf("%f",&notas[i]);
    soma=soma+notas[i];
    }
    media=(soma)/5;

    for(int i=0;i<5;i++){
        if (notas[i]>media) printf("Nota %d tem a nota %.2f maior que a média %.2f\n",(i+1),notas[i],media);

    }

    return 0;
}
