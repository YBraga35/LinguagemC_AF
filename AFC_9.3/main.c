#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 100
struct hospital
{
    int cod;
    float sal;
    int idade;
    char sexo;
} func[N];
int f=0, homens = 0, mulheres = 0, itotal = 0;
void abertura ();
void dadosHosp();
void imprimeDados();
void atribFunc();
void plano();
void maisSal();
void menuDados();
int main()
{
    setlocale(LC_ALL,"Portuguese");
    abertura();
    printf("\nVoc� deve inserir os dados dos 5 primeiros funcion�rios: \n");
    system("pause");
    for (int i = 0; i < 5; i++)
    {
        atribFunc();
    }
    menu();
    return 0;
}
void abertura()
{
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\tSeja bem vindo ao Sistema do Hospital Virtual!\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
}
void menu()
{
    int opt, o;
    do
    {
        do
        {
            printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\tHospital Virtual\n");
            printf("\t\t\tEscolha de Opera��es\n");
            printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            printf("\t1 - Atribui��o de novo Funcion�rio\n");
            printf("\t2 - Consulta de dados de Funcion�rio\n");
            printf("\t3 - Aumento de sal�rio de Funcion�rio\n");
            printf("\t4 - Consulta de dados gerais do Hospital\n");
            printf("\nDigite a opera��o desejada de acordo com seu �ndice: ");
            scanf("%d", &opt);
            system("cls");
            do
            {
                switch (opt)
                {
                case 1:
                    atribFunc();
                    o = 1;
                    break;
                case 2:
                    imprimeDados();
                    o = 1;
                    break;
                case 3:
                    maisSal();
                    o = 1;
                    break;
                case 4:
                    dadosHosp();
                    o = 1;
                    break;
                default:
                    printf("Op��o inv�lida, digite novamente");
                    o = 0;
                    break;
                }
            }
            while (o == 0);
        }
        while (opt > 4 && opt <1);
        printf("Deseja sair do sistema?\nSe sim digite 0, sen�o digite 1: ");
        scanf("%d", &o);
    }
    while (o == 0);
}
void plano()
{
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\tSistema do Hospital Virtual\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void dadosHosp()
{
    int opt;
    float imedia;
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\tHospital Virtual\n");
    printf("\t\t\tBusca de dados\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("\t1 - Quantidade de Funcion�rios Homens e Mulheres\n");
    printf("\t2 - M�dia de Idade de todos os Funcion�rios\n");
    printf("\t3 - Impress�o de todos os dados de todas as mulheres\n");
    scanf("%d", &opt);
    system("cls");
    plano();
    switch(opt)
    {
    case 1:
        printf("\n - Homens no Hospital: %d", homens);
        printf("\n - Mulheres no Hospital %d", mulheres);
        break;
    case 2:
        imedia = itotal/f;
        printf("A idade m�dia dos Funcion�rios �: %.1f", imedia);
        break;
    case 3:
        for (int i = 0; i < N; i++)
        {
            if (func[i].sexo == 'f')
            {
                printf("C�digo do Funcion�rio: %d", func[i].cod);
                printf("Sal�rio do Funcion�rio:\t%.2f\n", func[i].sal);
                printf("Idade do Funcion�rio:\t%d anos\n", func[i].idade);
            }
        }
        break;
    }
}
void maisSal()
{
    int ctrl = 0, s, opt, mais, busca, o, controle;
    float salTemp, salCont;
    plano();
    printf("\tEscolha qual o funcion�rio para ver seus dados.\n Em seguida, decida qual aumento salarial ser�:\n");
    printf("Funcion�rio c�digo: ");
    scanf("%d", &busca);
    do
    {
        for (int i = 0; i < N; i++)
        {
            if (busca == func[i].cod)
            {
                printf("Sal�rio do Funcion�rio:\t%.2f\n", func[i].sal);
                printf("Idade do Funcion�rio:\t%d anos\n", func[i].idade);
                if (func[i].sexo == 'm') printf("Sexo do Funcion�rio:\tMasculino\n");
                else printf("Sexo do Funcion�rio:\tFeminino\n");
                s = i;
                break;
            }
        }
        printf("Escolha a forma como ser� o acr�scimo de sal�rio do Funcion�rio");
        printf("\n 1 - Percentual");
        printf("\n 2 - Valor absoluto\n - ");
        scanf("%d", &opt);
        system("cls");
        plano();
        switch (opt)
        {
        case 1:
            do
            {
                printf("Funcion�rio C�digo: %d\n", func[s].cod);
                printf("Sal�rio atual: %.2f\n", func[s].sal);
                printf("Digite a porcentagem que deseja alterar o sal�rio em n�meros separados por v�rgula\n");
                printf("Exemplo: 10 causa um acr�scimo de 10%% no sal�rio total\n");
                printf(" - Porcentagem que deseja alterar: ");
                scanf("%d", &mais);
                salCont = func[s].sal;
                if (mais < 0)
                {
                    salTemp = (salCont*(100-mais))/100;
                    printf("Sal�rio ap�s a altera��o: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a altera��o ou deseja alterar a porcentagem?\n");
                    printf(" 0 - Refazer a opera��o e descartar as altera��es\n");
                    printf(" 1 - Terminar a opera��o e manter as altera��es\n");
                    scanf("%d", &o);
                }
                else if (mais > 0)
                {
                    salTemp = (salCont*(100+mais))/100;
                    printf("Sal�rio ap�s a altera��o: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a altera��o ou deseja alterar a porcentagem?\n");
                    printf(" 0 - Refazer a opera��o e descartar as altera��es\n");
                    printf(" 1 - Terminar a opera��o e manter as altera��es\n");
                    scanf("%d", &o);
                }
                else printf("N�o haver� altera��o salarial");
            }
            while(o == 0);
            func[s].sal = salTemp;
            break;
        case 2:
            do
            {
                printf("Funcion�rio C�digo: %d", func[s].cod);
                printf("Sal�rio atual: %.2f", func[s].sal);
                printf("Digite a porcentagem que deseja alterar o sal�rio em n�meros separados por v�rgula\n");
                printf("Exemplo: 10 causa um acr�scimo de R$10 no sal�rio total. Enquanto -10 causa um decr�scimo de R$10");
                printf(" - Valor que que deseja alterar: ");
                salCont = func[s].sal;
                scanf("%d", &mais);
                if (mais < 0)
                {
                    salTemp = salCont - mais;
                    printf("Sal�rio ap�s a altera��o: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a altera��o ou deseja alterar o valor?\n");
                    printf(" 0 - Terminar a opera��o e manter as altera��es\n");
                    printf(" 1 - Refazer a opera��o e descartar as altera��es\n");
                    scanf("%d", &o);
                }
                else if (mais > 0)
                {
                    salTemp = salCont + mais;
                    printf("Sal�rio ap�s a altera��o: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a altera��o ou deseja alterar a porcentagem?\n");
                    printf(" 0 - Terminar a opera��o e manter as altera��es\n");
                    printf(" 1 - Refazer a opera��o e descartar as altera��es\n");
                    scanf("%d", &o);
                }
                else printf("N�o haver� altera��o salarial");
            }
            while(o != 0);
            func[s].sal = salTemp;
            break;
        default:
            printf("N�o programei essa parte ainda!");
            break;
        }
        printf(" Deseja modificar o sal�rio de outro funcion�rio?\nSe sim digite 1, se n�o digite 0: ");
        scanf("%d", &controle);
    }
    while (controle = 0);
    system("cls");
}
void imprimeDados()
{
    int busca, esc;
    system("cls");
    plano();
    do
    {
        printf("Funcion�rio c�digo: ");
        scanf("%d", &busca);
        for (int i = 0; i < N; i++)
        {
            if (busca == func[i].cod)
            {
                printf("Sal�rio do Funcion�rio:\t%.2f\n", func[i].sal);
                printf("Idade do Funcion�rio:\t%d anos\n", func[i].idade);
                if (func[i].sexo == 'm') printf("Sexo do Funcion�rio:\tMasculino\n");
                else printf("Sexo do Funcion�rio:\tFeminino\n");
                system("pause");
                break;
            }
        }
        printf("Deseja buscar outro funcion�rio?\nSe sim, digite 0, se n�o digite 1: ");
        scanf("%d", &esc);
        system("cls");
    }
    while(esc == 0);
}
void atribFunc()
{
    int vzsexo=0, sexo = 0;
    f++;
    plano();
    printf("\tFuncion�rio %d\n - Digite seu c�gigo: ", f);
    scanf("%d",&func[f].cod);
    printf(" - Digite seu sal�rio separado por v�rgula: ");
    scanf("%f",&func[f].sal);
    printf(" - Digite sua idade: ");
    scanf("%d",&func[f].idade);
    itotal = itotal + func[f].idade;
    do
    {
        if (vzsexo == 0)
        {
            printf(" - Digite seu sexo em 'm' ou 'f': ");
            getchar();
            scanf("%c",&func[f].sexo);
            if (func[f].sexo == 'm')
            {
                sexo = 1;
                homens++;
            }
            else if (func[f].sexo == 'f')
            {
                sexo = 2;
                mulheres++;
            }
        }
        else if (vzsexo != 0)
        {
            printf("Op��o inv�lida, digite novamente, atente-se � letra mai�scula\n");
            printf(" - Digite seu sexo em 'm' ou 'f': ");
            getchar();
            scanf("%c",&func[f].sexo);
            if (func[f].sexo == 'm') sexo = 1;
            else if (func[f].sexo == 'f') sexo = 2;
        }
        vzsexo++;
    }
    while (sexo == 0);
    vzsexo=0;
    system("cls");
}
