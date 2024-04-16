Algoritmo "AP1_10"
// Disciplina  :  Algortimos e Programação
// Professor   : Luciano Blomberg
// Descrição   : Números de ímpares
// Autor(a)    : Yan Braga da Silva
// Data atual  : 24/04/2023
Var
   n,c:inteiro


Inicio
   escreval ("Digite um número maior que zero para ver quantos ímpares: " )
   leia (n)
   se n>0 entao
      escreval("Você verá os ",n," inteiros ímpares em ordem crescente:")
      repita
         escreva(1+2*c)
         c<-c+1
         n<-n-1
      ate n=0
   senao
      escreva("O número informado é inválido")
   fimse



Fimalgoritmo