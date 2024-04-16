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
    printf("\nVocê deve inserir os dados dos 5 primeiros funcionários: \n");
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
            printf("\t\t\tEscolha de Operações\n");
            printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            printf("\t1 - Atribuição de novo Funcionário\n");
            printf("\t2 - Consulta de dados de Funcionário\n");
            printf("\t3 - Aumento de salário de Funcionário\n");
            printf("\t4 - Consulta de dados gerais do Hospital\n");
            printf("\nDigite a operação desejada de acordo com seu índice: ");
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
                    printf("Opção inválida, digite novamente");
                    o = 0;
                    break;
                }
            }
            while (o == 0);
        }
        while (opt > 4 && opt <1);
        printf("Deseja sair do sistema?\nSe sim digite 0, senão digite 1: ");
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
    printf("\t1 - Quantidade de Funcionários Homens e Mulheres\n");
    printf("\t2 - Média de Idade de todos os Funcionários\n");
    printf("\t3 - Impressão de todos os dados de todas as mulheres\n");
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
        printf("A idade média dos Funcionários é: %.1f", imedia);
        break;
    case 3:
        for (int i = 0; i < N; i++)
        {
            if (func[i].sexo == 'f')
            {
                printf("Código do Funcionário: %d", func[i].cod);
                printf("Salário do Funcionário:\t%.2f\n", func[i].sal);
                printf("Idade do Funcionário:\t%d anos\n", func[i].idade);
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
    printf("\tEscolha qual o funcionário para ver seus dados.\n Em seguida, decida qual aumento salarial será:\n");
    printf("Funcionário código: ");
    scanf("%d", &busca);
    do
    {
        for (int i = 0; i < N; i++)
        {
            if (busca == func[i].cod)
            {
                printf("Salário do Funcionário:\t%.2f\n", func[i].sal);
                printf("Idade do Funcionário:\t%d anos\n", func[i].idade);
                if (func[i].sexo == 'm') printf("Sexo do Funcionário:\tMasculino\n");
                else printf("Sexo do Funcionário:\tFeminino\n");
                s = i;
                break;
            }
        }
        printf("Escolha a forma como será o acréscimo de salário do Funcionário");
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
                printf("Funcionário Código: %d\n", func[s].cod);
                printf("Salário atual: %.2f\n", func[s].sal);
                printf("Digite a porcentagem que deseja alterar o salário em números separados por vírgula\n");
                printf("Exemplo: 10 causa um acréscimo de 10%% no salário total\n");
                printf(" - Porcentagem que deseja alterar: ");
                scanf("%d", &mais);
                salCont = func[s].sal;
                if (mais < 0)
                {
                    salTemp = (salCont*(100-mais))/100;
                    printf("Salário após a alteração: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a alteração ou deseja alterar a porcentagem?\n");
                    printf(" 0 - Refazer a operação e descartar as alterações\n");
                    printf(" 1 - Terminar a operação e manter as alterações\n");
                    scanf("%d", &o);
                }
                else if (mais > 0)
                {
                    salTemp = (salCont*(100+mais))/100;
                    printf("Salário após a alteração: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a alteração ou deseja alterar a porcentagem?\n");
                    printf(" 0 - Refazer a operação e descartar as alterações\n");
                    printf(" 1 - Terminar a operação e manter as alterações\n");
                    scanf("%d", &o);
                }
                else printf("Não haverá alteração salarial");
            }
            while(o == 0);
            func[s].sal = salTemp;
            break;
        case 2:
            do
            {
                printf("Funcionário Código: %d", func[s].cod);
                printf("Salário atual: %.2f", func[s].sal);
                printf("Digite a porcentagem que deseja alterar o salário em números separados por vírgula\n");
                printf("Exemplo: 10 causa um acréscimo de R$10 no salário total. Enquanto -10 causa um decréscimo de R$10");
                printf(" - Valor que que deseja alterar: ");
                salCont = func[s].sal;
                scanf("%d", &mais);
                if (mais < 0)
                {
                    salTemp = salCont - mais;
                    printf("Salário após a alteração: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a alteração ou deseja alterar o valor?\n");
                    printf(" 0 - Terminar a operação e manter as alterações\n");
                    printf(" 1 - Refazer a operação e descartar as alterações\n");
                    scanf("%d", &o);
                }
                else if (mais > 0)
                {
                    salTemp = salCont + mais;
                    printf("Salário após a alteração: %.2f\n\n", salTemp);
                    printf("Deseja prosseguir com a alteração ou deseja alterar a porcentagem?\n");
                    printf(" 0 - Terminar a operação e manter as alterações\n");
                    printf(" 1 - Refazer a operação e descartar as alterações\n");
                    scanf("%d", &o);
                }
                else printf("Não haverá alteração salarial");
            }
            while(o != 0);
            func[s].sal = salTemp;
            break;
        default:
            printf("Não programei essa parte ainda!");
            break;
        }
        printf(" Deseja modificar o salário de outro funcionário?\nSe sim digite 1, se não digite 0: ");
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
        printf("Funcionário código: ");
        scanf("%d", &busca);
        for (int i = 0; i < N; i++)
        {
            if (busca == func[i].cod)
            {
                printf("Salário do Funcionário:\t%.2f\n", func[i].sal);
                printf("Idade do Funcionário:\t%d anos\n", func[i].idade);
                if (func[i].sexo == 'm') printf("Sexo do Funcionário:\tMasculino\n");
                else printf("Sexo do Funcionário:\tFeminino\n");
                system("pause");
                break;
            }
        }
        printf("Deseja buscar outro funcionário?\nSe sim, digite 0, se não digite 1: ");
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
    printf("\tFuncionário %d\n - Digite seu cógigo: ", f);
    scanf("%d",&func[f].cod);
    printf(" - Digite seu salário separado por vírgula: ");
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
            printf("Opção inválida, digite novamente, atente-se à letra maiúscula\n");
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
