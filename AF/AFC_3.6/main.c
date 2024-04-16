#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int man=0,wom=0,hg=0,hng=0,mg=0,mng=0,am=0,menor=0,maior=0,a=0,menorm=0,maiorm=0;
    char sexo;
    for (int i=0; i<5; i++)
    {

        printf("Digite seu sexo:\n");

        scanf("%c",&sexo);

        switch (sexo)
        {
        case 'm':
        {
            man++;
            printf("Digite sua altura em centímetros:\n");
            scanf("%d",&a);
            printf("\n");
            if (menor==0)
                menor=a;
            else if (a>maior)
                maior=a;
            else if (a<menor)
                menor=a;
            break;
        }
        case 'M':
        {
            man++;
            printf("Digite sua altura em centímetros:\n");
            scanf("%d",&a);
            printf("\n");
            if (a>maior)
                maior=a;
            else if (menor==0)
                menor=maior;
            if (a<menor)
                menor=a;
            break;
        }
        case 'f':
        {
            wom++;
            printf("Digite sua altura em centímetros:\n");
            scanf("%d",&a);
            printf("\n");
            am=a;
            if (am>maiorm)
                maiorm=am;
                if (maiorm>maior)
                    maior=maiorm;
            if (menorm==0)
                menorm=maiorm;
            else if (am<menorm)
                menorm=am;
            if (menorm<menor)
                menor=menorm;
            break;
        }
        case 'F':
        {
            wom++;
            printf("Digite sua altura em centímetros:\n");
            scanf("%d",&a);
            printf("\n");
            am=a;
            if (am>maiorm)
                maiorm=am;
            if (maiorm>maior)
                maior=maiorm;
            if (menorm==0)
                menorm=maiorm;
            else if (am<menorm)
                menorm=am;
            if (menorm<menor)
                menor=menorm;
            break;
        }

        }

        getchar();
    }

    printf("A maior altura do grupo é %dcm, enquanto a menor altura do grupo é %dcm. A média de altura das mulheres é %.1fcm. %d homens responderam e %d mulheres responderam ",maior,menor,(maiorm+menorm)/2,man,wom);

    return 0;
}
