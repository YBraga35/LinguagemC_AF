#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 10
void cabeca();
void header();
void lancamento(int *n);
void consulta(int *n);
void relatorio();
void estatisticas();
void fim();
struct faculdade
{
    int matricula;
    char nome[80];
    float frequencia;
    float notas[3];
    float media;
    char resultado;
} estudantes[N];

int main()
{
    int opt, nEstudantes = 0;
    fopen("lancamentos.txt", "w");
    setlocale(LC_CTYPE, "Portuguese");
    do
    {
        do
        {
            system("cls");
            cabeca();
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                system("cls");
                header();
                lancamento(&nEstudantes);
                break;
            case 2:
                system("cls");
                header();
                consulta(&nEstudantes);
                break;
            case 3:
                system("cls");
                header();
                relatorio();
                break;
            case 4:
                system("cls");
                header();
                estatisticas();
            case 5:
                system("cls");
                header();
                fim();
                break;
            default:
                printf("\nOp��o Inv�lida, tente novamente!\n\n");
            }
        }
        while (opt > 0 && opt < 5);
        system("pause");
    }
    while (opt != 5);
    return 0;
}

void header()
{
    printf("***************************************************************************************************\n");
    printf("\t\t\tGEST�O DE AVALIA��ES - ALGORITMOS E PROGRAMA��O\n");
    printf("***************************************************************************************************\n");
}

void cabeca()
{
    header();
    printf(" 1- Lan�ar avalia��es e frequ�ncias\n");
    printf(" 2- Consultar avalia��es e frequ�ncias lan�adas\n");
    printf(" 3- Gerar relat�rio de fechamento\n");
    printf(" 4- Apresentar estat�sticas\n");
    printf(" 5- Sair do programa\n");
    printf("\n -> ");
}

void fim()
{
    printf("\n\n\tVoc� chegou ao final do programa, no caso de d�vidas,\n");
    printf("entre em contato com o suporte t�cnico pelo email: suporte@algprog.com\n\n\n");
}


void lancamento(int *n)
{
    printf("\n\t ~~~~LAN�AMENTO DE AVALIA��ES~~~~~\n\n");
    int opt, est = *n, grav = 0;
    FILE *lanca = fopen("lancamentos.txt", "w");
    for (int i = 0; i < N; i++)
    {
        printf(" - Voc� pode lan�ar os dados de 10 estudantes no sistema\n");
        printf("\n\t- Matr�cula: ");
        scanf("%d", &estudantes[*n].matricula);
        printf("\t- Nome: ");
        getchar();
        fgets(estudantes[*n].nome, 80, stdin);
        estudantes[*n].nome[strcspn(estudantes[*n].nome, "\n")] = 0;
        printf("\t- Frequ�ncia (n�mero de 0 a 100, separado por ponto): ");
        scanf("%f", &estudantes[*n].frequencia);
        printf("\tDigite o valor das 3 notas do estudantes, de 0 a 10, separado por ponto: \n");
        for (int j = 0; j < 3; j++)
        {
            printf("\n- Nota %d: ", j+1);
            scanf ("%f", &estudantes[*n].notas[j]);
        }
        *n = ++est;
        printf("\nAt� o momento voc� preencheu os dados de %d estudantes\n", *n);
        printf("Voc� deseja preencher mais dados de estudantes ou voltar ao menu principal?\n");
        printf("1 - Manter-se preenchendo\n");
        printf("2 - Voltar ao menu principal\n");
        scanf("%d", &opt);
        if (opt == 2)
        {
            grav = i+1;
            break;
        }
        system("cls");
        header();
    }
    for (int k = 0; k < est; k++)
    {
        int haerro = fprintf(lanca, "%d; %s; %.2f; %.2f; %.2f%; %.2f; %.2f; %s;\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], 0.0, "x");
    }
    fclose(lanca);
    system("pause");
}
void consulta(int *n)
{
    FILE *lancamentos = fopen("lancamentos.txt", "r");
    int k=0;
    printf("\n\t~~~~CONSULTA DE DADOS DO SISTEMA~~~~\n");
    if (*n == 0)
    {
        printf("\n~~ ! ! N�O H� ESTUDANTES CADASTRADOS NO SISTEMA ! ! ~~\n\n");
    }
    else
    {
        printf("%-10s %-30s %-15s %-10s %-10s %-10s %-10s %-10s", "Matr�cula", "Nome", "Frequ�ncia", "Nota 1", "Nota 2", "Nota 3", "M�dia", "Resultado");
        printf("\n");

        while (k < *n)
        {
            printf("%-10d %-30s %-15.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10s\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], estudantes[k].media, estudantes[k].resultado);
            k++;
        }
    }
    fclose(lancamentos);
    system("pause");
}
void relatorio()
{

}

void estatisticas()
{

}
