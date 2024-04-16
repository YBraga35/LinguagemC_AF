#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    char vet_char[3][30];
    int flag[3]= {0,0,0};
    setlocale(LC_ALL,"Portuguese");
    printf("Digite 3 palavras para serem armazenadas:\n");
    for (int i=0; i<3; i++)
    {
        fgets(vet_char[i],30,stdin);
    }
    printf("- - - - - - - - - - - - - - -");
    for (int i=0; i<3; i++)
    {
        vet_char[i][strlen(vet_char[i])-1]='\0';
        printf("\n\nPalava %d: %s\n",i+1,vet_char[i]);
        for (int j=0; j<30; j++)
        {

            if (vet_char[i][j]=='\0' && flag[i]==0)
            {
                printf("A palavra %d tem %d caracteres\n",i+1,j);
                flag[i]++;
            }
        }
    }


    return 0;
}
