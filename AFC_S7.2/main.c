#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float notas[5][3],media[5]={0,0,0,0,0},notat=0,mediat=0;
    printf("Digite as 3 notas de cada aluno, em ordem: \n");
    for(int i=0;i<5;i++){
            printf("Lendo as notas do Aluno %d \n",(i+1));
        for(int j=0;j<3;j++){
            printf(" Nota %d: ",(j+1));
            scanf("%f",&notas[i][j]);
            media[i]=media[i]+notas[i][j];

            }
    printf("A média do aluno %d é: %.2f \n \n",(i+1),media[i]/3);

    }
    for (int i=0;i<5;i++){
        notat=notat+media[i];
        mediat=notat/5;
        if (media[i]>mediat){
            printf ("O Aluno %d teve sua média acima de seus colegas, por %.2f pontos\n",(i+1),(media[i]-mediat));
        }
    }

    return 0;
}
