Algoritmo "AP1_14"
// Descrição   : Soma dos múltiplos de 5 até o n número
// Autor(a)    : Yan Braga da Silva
// Data atual  : 25/04/2023
Var
   // Seção de Declarações das variáveis
   n, total,m:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval ("Digite um valor que será somados os múltiplos de 5 até ele")
   leia (n)
   se (n>4) entao
      repita
         m<-m+1
         total<-total+5*m
         n<-n-5
      ate n=0
      escreva ("A soma dos mútiplos de 5 de ",m," é igual a: ",total)
   senao
      escreva ("A soma dos múltiplos de 5 é igual a: 0")
   fimse

Fimalgoritmo