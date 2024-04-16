#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct escola
{
    int matricula;
    float media;
} aluno[4];
int main()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *arquivo = fopen("alunos.txt", "w");
    for (int i = 0; i < 4; i++)
    {
        printf("Digite a matrícula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite a média final do aluno %d: ", i+1);
        scanf("%f", &aluno[i].media);
    }
    for (int i = 0; i < 4; i++)
    {
        int haerro = fprintf(arquivo, "%d;%f\n", aluno[i].matricula, aluno[i].media);
        if (haerro < 0)
        {
            printf("Erro na gravação do aluno %d", i+1);
        }
    }
    fclose(arquivo);

    return 0;
}
