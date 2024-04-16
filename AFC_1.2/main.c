#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr,mn,sg,tempo;
    printf("Digite um tempo em horas, minutos e segundos, respectivamente\n");
    scanf("%d %d %d",&hr,&mn,&sg);
    tempo= hr*60*60+mn*60+sg;
    printf("Seu tempo em segundos: %d",tempo);



    return 0;
}
