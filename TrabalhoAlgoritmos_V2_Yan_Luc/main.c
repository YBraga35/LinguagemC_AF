#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 10
void cabeca();
void header();
int contaAlunos();
void lancamento(int *n, int *estInic);
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
    char resultado[15];
} estudantes[N];

int main()
{
    int opt, estInic=0;
    setlocale(LC_CTYPE, "Portuguese");
    int nEstudantes = contaAlunos();
    estInic = nEstudantes;
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
            lancamento(&nEstudantes, &estInic);
            break;
        case 2:
            system("cls");
            header();
            consulta(&nEstudantes);
            break;
        case 3:
            system("cls");
            header();
            relatorio(&nEstudantes);
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
    while (opt > 0 && opt < 5 && opt != 5);
    system("pause");
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

int contaAlunos()
{
    FILE *contagem = fopen("lancamentos.txt", "r");
    int k = 0;
    while (fscanf(contagem,"%d; %[^;];%f;%f;%f;%f;%f;%s\n", &estudantes[k].matricula, estudantes[k].nome, &estudantes[k].frequencia, &estudantes[k].notas[0], &estudantes[k].notas[1], &estudantes[k].notas[2], &estudantes[k].media, estudantes[k].resultado)!= EOF)
    {
        k++;
    }
    fclose(contagem);
    return k;
}

void fim()
{
    printf("\n\n\tVoc� chegou ao final do programa, no caso de d�vidas,");
    printf("entre em contato com o suporte t�cnico pelo email: suporte@algprog.com\n\n");
}


void lancamento(int *n, int *estInic)
{
    printf("\n\t ~~~~LAN�AMENTO DE AVALIA��ES~~~~~\n\n");
    int opt, est = *n, controle = 0;
    FILE *relat = fopen("relatorio.txt", "r");
    printf("N�mero de estudantes: %d\n", *n);
    char linha[150];
    while (fgets(linha, 150, relat)!= NULL)
    {
        controle++;
    }
    if (controle == 0)
    {
        for (int i = *n; i < N; i++)
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
                break;
            }
            system("cls");
            header();
        }
        for (int k = *estInic; k < est; k++)
        {
            if (est != *estInic)
            {
                FILE *lanca = fopen("lancamentos.txt", "w");
                int haerro = fprintf(lanca, "%d;%s;%.2f;%.2f;%.2f;%.2f;%.2f;%s\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], 0.0, "x");
                if (haerro < 0)
                {
                    printf("Erro na grava��o!");
                    system("pause");
                }
                fclose(lanca);
            }
            else
            {
                FILE *lanca = fopen("lancamentos.txt", "a");
                int haerro = fprintf(lanca, "%d;%s;%.2f;%.2f;%.2f;%.2f;%.2f;%s\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], 0.0, "x");
                if (haerro < 0)
                {
                    printf("Erro na grava��o!");
                    system("pause");
                }
                fclose(lanca);
            }
        }
    }
    else
    {
        printf("\n\n\t ! ! RELAT�RIO DE FECHAMENTO J� GERADO ! !");
        printf("\n\n\t - N�O � POSS�VEL LARN�AR MAIS ALUNOS -\n\n");
        system("pause");
    }
    fclose(relat);
}
void consulta(int *n)
{
    FILE *relat = fopen("relatorio.txt", "r");
    int controle = 0, k = 0;
    printf("\n\t~~~~CONSULTA DE DADOS DO SISTEMA~~~~\n");
    while (fscanf(relat,"%d; %[^;];%f;%f;%f;%f;%f;%s\n", &estudantes[k].matricula, estudantes[k].nome, &estudantes[k].frequencia, &estudantes[k].notas[0], &estudantes[k].notas[1], &estudantes[k].notas[2], &estudantes[k].media, estudantes[k].resultado)!= EOF)
    {
        controle++;
        if (controle == 1)
        {
            printf("\n\t ! ! RELAT�RIO J� GERADO ! !\n\n");
            printf("%-10s %-30s %-15s %-10s %-10s %-10s %-10s %-10s", "Matr�cula", "Nome", "Frequ�ncia", "Nota 1", "Nota 2", "Nota 3", "M�dia", "Resultado");
            printf("\n\n");
        }
        if (controle != 0)
        {
            printf("%-10d %-30s %-15.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10s\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], estudantes[k].media, estudantes[k].resultado);
        }
        k++;
    }

    if (controle == 0)
    {
        FILE *lancamentos = fopen("lancamentos.txt", "r");
        printf("\n\t~~~~CONSULTA DE DADOS DO SISTEMA~~~~\n");
        if (*n == 0)
        {
            printf("\n~~ ! ! N�O H� ESTUDANTES CADASTRADOS NO SISTEMA ! ! ~~\n\n");
        }
        else
        {
            printf("%-10s %-30s %-15s %-10s %-10s %-10s %-10s %-10s", "Matr�cula", "Nome", "Frequ�ncia", "Nota 1", "Nota 2", "Nota 3", "M�dia", "Resultado");
            printf("\n");

            while (fscanf(lancamentos,"%d; %[^;];%f;%f;%f;%f;%f;%s\n", &estudantes[k].matricula, estudantes[k].nome, &estudantes[k].frequencia, &estudantes[k].notas[0], &estudantes[k].notas[1], &estudantes[k].notas[2], &estudantes[k].media, estudantes[k].resultado)!= EOF)
            {
                printf("%-10d %-30s %-15.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10s\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], estudantes[k].media, estudantes[k].resultado);
                k++;
            }
        }
        fclose(lancamentos);
    }
    fclose(relat);
    system("pause");
}
void relatorio(int *n)
{
    int controle = 0, k = 0;
    FILE *relat = fopen("relatorio.txt", "r");
    while (fscanf(relat,"%d; %[^;];%f;%f;%f;%f;%f;%s\n", &estudantes[k].matricula, estudantes[k].nome, &estudantes[k].frequencia, &estudantes[k].notas[0], &estudantes[k].notas[1], &estudantes[k].notas[2], &estudantes[k].media, estudantes[k].resultado)!= EOF)
    {
        controle++;
    }
    if (controle == 0)
    {
        char resposta;
        FILE *lancamentos = fopen("lancamentos.txt", "r");
        FILE *relat = fopen("relatorio.txt", "w");
        printf("\n\t~~~~GERA��O DE RELAT�RIO DE FECHAMENTO~~~~\n");
        if (*n == 0)
        {
            printf("\n~~ ! ! N�O H� ESTUDANTES CADASTRADOS NO SISTEMA ! ! ~~\n\n");
        }
        else
        {
            printf("\nVoc� deseja imprimir o relat�rio de fechamento? (S ou N)\n");
            getchar();
            scanf("%c",&resposta);
            system("cls");
            do
            {
                if(resposta == 'S' || resposta == 's')
                {
                    int k = 0;
                    printf("%-10s %-30s %-15s %-10s %-10s %-10s %-10s %-10s", "Matr�cula", "Nome", "Frequ�ncia", "Nota 1", "Nota 2", "Nota 3", "M�dia", "Resultado");
                    printf("\n");
                    while (fscanf(lancamentos,"%d; %[^;];%f;%f;%f;%f;%f;%s\n", &estudantes[k].matricula, estudantes[k].nome, &estudantes[k].frequencia, &estudantes[k].notas[0], &estudantes[k].notas[1], &estudantes[k].notas[2], &estudantes[k].media, estudantes[k].resultado)!= EOF)
                    {
                        estudantes[k].media = ((estudantes[k].notas[0] * 2) + (estudantes[k].notas[1] * 3) + (estudantes[k].notas[2] * 5))/10;
                        if (estudantes[k].media >=7 && estudantes[k].frequencia >=75)
                        {
                            strcpy(estudantes[k].resultado, "Aprovado(a)");
                        }
                        else
                        {
                            strcpy(estudantes[k].resultado, "Reprovado(a)");
                        }
                        printf("%-10d %-30s %-15.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10s\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], estudantes[k].media, estudantes[k].resultado);

                        int haerro = fprintf(relat, "%d;%s;%.2f;%.2f;%.2f;%.2f;%.2f;%s\n", estudantes[k].matricula, estudantes[k].nome, estudantes[k].frequencia, estudantes[k].notas[0], estudantes[k].notas[1], estudantes[k].notas[2], estudantes[k].media, estudantes[k].resultado);
                        //printf("Haerro : %d", haerro);
                        k++;
                        if (haerro < 0)
                        {
                            printf("Erro na grava��o!");
                            system("pause");
                        }
                    }
                }
                else if (resposta == 'N' || resposta =='n')
                {
                    system("cls");
                    header();
                    printf("\n\n\t- Voltando para o menu principal!\n");
                    printf("\n");
                }
            }
            while (resposta == 'N' || resposta =='n' || resposta == 'S' || resposta == 's');
        }
        fclose(lancamentos);
        fclose(relat);
        system("pause");
        system("cls");
    }
    else
    {
        printf("\n\t~~~~GERA��O DE RELAT�RIO INDISPON�VEL~~~~\n");
        printf("\n\t ! ! RELAT�RIO J� GERADO ! !\n\n");
        system("pause");
    }
}
void estatisticas()
{
    int controle = 0, k = 0, nAprovados = 0, nReprovados = 0;
    float somaFreq = 0.0, somaMedias = 0.0;
    FILE *relat = fopen("relatorio.txt", "r");

    while (fscanf(relat,"%d; %[^;];%f;%f;%f;%f;%f;%s\n", &estudantes[k].matricula, estudantes[k].nome, &estudantes[k].frequencia, &estudantes[k].notas[0], &estudantes[k].notas[1], &estudantes[k].notas[2], &estudantes[k].media, estudantes[k].resultado)!= EOF)
    {
        controle++;
        k++;
    }
    if (controle == 0)
    {
        printf("\n\n\t ! ! N�O � POSS�VEL GERAR ESTAT�STICAS ! !");
        printf("\n\n\t - PRIMEIRO � PRECISO GERAR RELAT�RIO DE FECHAMENTO -");
        system("pause");
    }
    else
    {
        printf("\n\t~~~~GERAR ESTAT�STICAS~~~~\n");
        k = 0;
        while(fscanf(relat,"%d; %[^;];%f;%f;%f;%f;%f;%s\n", &estudantes[k].matricula, estudantes[k].nome, &estudantes[k].frequencia, &estudantes[k].notas[0], &estudantes[k].notas[1], &estudantes[k].notas[2], &estudantes[k].media, estudantes[k].resultado)!= EOF)
        {
            k++;
            somaFreq = estudantes[k].frequencia + somaFreq;
            somaMedias = estudantes[k].media + somaMedias;
            printf("Frequ�ncias: %.2f\tM�dias: %.2f\n", somaFreq, somaMedias);
            if (strcpy(estudantes[k].resultado, "Aprovado(a)"))
            {
                nAprovados++;
            }
            else
            {
                nReprovados++;
            }
            printf("Aprovados: %d\tReprovados: %d\n", nAprovados, nReprovados);
        }
        printf("\n\n -> M�dia da turma: %.2f", (somaMedias/k));
        printf("\n -> M�dia de frequ�ncia da turma: %.2f", (somaFreq/k));
        printf("\n -> N�mero de Aprovados: %d", nAprovados);
        printf("\n -> N�mero de Reprovados: %d\n\n", nReprovados);
        system("pause");
    }
}
