Algoritmo "AP1_15"
// Descrição   : Imprime os valores de 1 até n e os soma
// Autor(a)    : Yan Braga da Silva
// Data atual  : 25/04/2023
Var
   // Seção de Declarações das variáveis
   n,m, total:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval ("Digite um valor que será somados os números de 1 até ele")
   leia (n)
   se (n>0) entao
      repita
         escreva
         m<-m+1
         escreva (m)
         se (total=0) entao
            total<-m
         senao
            total<-total*m
         fimse
         n<-n-1
      ate n=0
      escreval("")
      escreva ("O produto dos números de 1 até ",m," é igual a: ",total)
   senao
      escreva ("Entrada inválida")
   fimse

Fimalgoritmo