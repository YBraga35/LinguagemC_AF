#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int inter,gremio,outros,i,time,poa,cidade,nasc;
    for (int i=0; i>5; i++)
    {
        printf("Digite sua idade e onde nasceu: Porto Alegre (0) /outras cidades (1) \n");
        scanf("%d %c",&i,&nasc);
        switch (nasc)
        {
        case 0: //Porto Alegre
            printf("Digite seu time de futebol de preferência: \nInternacional (1) / Grêmio (2) / Outros (3)");
            scanf("%d",&time);
            switch (time)
            {
            case 1: //inter
                inter++;
                idadei=idadei+i;
                break;
            case 2: //gremio
                gremio++;
                idadeg=idadeg+i;

                break;
            case 3: //outros
                outros++;
                cidade++;
                break;

            }
            break;
        case 1: // Outras cidades
            printf("Digite seu time de futebol de preferência: \nInternacional (1) / Grêmio (2) / Outros (3)");
            scanf("%d",&time);
            switch (time)
            {
            case 1: //inter
                inter++;
                idadei=idadei+i;

                break;
            case 2: //gremio
                gremio++;
                idadeg=idadeg+i;

                break;
            case 3: //outros
                outros++;
                break;

                break;


            }
        }
    }

    printf("Hello world!\n");
    return 0;
}
