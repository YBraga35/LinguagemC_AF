#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void posNeg(float *ponteiro);
int main()
{
    float x, *px;
    px = &x;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero real separado por ponto: ");
    scanf("%f", &x);
    printf("Endere�o de X (em ponteiro): %p\n", &x);
    printf("Endere�o de X (em inteiros): %d\n", &x);
    printf("At� aqui estamos em Main");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
    posNeg(px);
    return 0;
}

void posNeg(float *ponteiro)
{
    printf("Valor de p: %d\n", ponteiro);
    printf("Endere�o de p: %p\n", &ponteiro);
    printf("Valor apontado por p: %f\n", *ponteiro);
    printf("Apenas testes de ponteiros\n");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - -  - - - - -\n\n");

    if (*ponteiro > 0){
        printf("O valor %f � positivo", *ponteiro);
    }
    else if (*ponteiro < 0) {
        printf("O valor %f � negativo", *ponteiro);
    }
    else printf("O valor informado � igual a zero");
}
