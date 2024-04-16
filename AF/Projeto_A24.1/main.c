#include <stdio.h>
#include <stdlib.h>
void mudaVal();
int main(float *pX, float *pY)
{
    float x, y;
    printf("Digite dois valores para X e Y:\n");
    scanf("%f%f", &x, &y);
    mudaVal(&x, &y);
    printf("Valor de X: %f\nValor de Y: %f", x, y);

    return 0;
}


void mudaVal(float *pX, float *pY)
{
    float aux = *pX;
    *pX = *pY;
    *pY = aux;

}
