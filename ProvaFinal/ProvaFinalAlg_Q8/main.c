#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct escola
{
    int matricula;
    float media;
};
int main()
{
    FILE *arquivo = fopen("alunos.txt", "r");
    float maior;
    int matMaior;
    struct escola aluno[4];
    setlocale(LC_ALL, "Portuguese");
    for (int i = 0; i < 4; i++)
    {
        int haerro = fscanf(arquivo, "%d;%f\n", &aluno[i].matricula, &aluno[i].media);
        if (haerro < 0)
        {
            printf("Erro na leitura do aluno %d", i+1);
        }
        if (aluno[i].media > maior)
        {
            maior = aluno[i].media;
            matMaior = aluno[i].matricula;
        }
    }
    printf("\n\nA matrícula do aluno com maior média é: %d", matMaior);
    return 0;
}
