#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempC,tempF;
    printf("Escreva sua temperatura em F, separada do decimal por '.' \n");
    scanf("%f",&tempF);

    tempC= (tempF - 32) * 5/9;
    printf("Sua temp em C: %1.f",tempC);

    return 0;
}
