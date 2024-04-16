#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void posNeg(float *ponteiro);
int main()
{
    float x, *px;
    px = &x;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número real separado por ponto: ");
    scanf("%f", &x);
    printf("Endereço de X (em ponteiro): %p\n", &x);
    printf("Endereço de X (em inteiros): %d\n", &x);
    printf("Até aqui estamos em Main");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
    posNeg(px);
    return 0;
}

void posNeg(float *ponteiro)
{
    printf("Valor de p: %d\n", ponteiro);
    printf("Endereço de p: %p\n", &ponteiro);
    printf("Valor apontado por p: %f\n", *ponteiro);
    printf("Apenas testes de ponteiros\n");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - -  - - - - -\n\n");

    if (*ponteiro > 0){
        printf("O valor %f é positivo", *ponteiro);
    }
    else if (*ponteiro < 0) {
        printf("O valor %f é negativo", *ponteiro);
    }
    else printf("O valor informado é igual a zero");
}
