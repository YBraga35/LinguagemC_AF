Algoritmo "AP1_11"
// Disciplina  :  Algortimos e Programação
// Professor   : Luciano Blomberg
// Descrição   : Números de ímpares
// Autor(a)    : Yan Braga da Silva
// Data atual  : 24/04/2023
Var
   n,c,total:inteiro


Inicio
   escreval ("Digite um número maior que zero para ter o somatório desse n número de pares: " )
   leia (n)
   c<-0
   total<-0
   se n>0 entao
      repita
         c<-c+1
         total<-total+(2*c)
         n<-n-1
      ate n=0
   senao
      escreva("O número informado é inválido")
   fimse
   escreva ("O somatório dos ",c," números pares é igual a: ",total)



Fimalgoritmo