Algoritmo "AP1_9"
// Disciplina  :  Algortimos e Programação
// Professor   : Luciano Blomberg
// Descrição   : Somatório 20 números e média
// Autor(a)    : Yan Braga da Silva
// Data atual  : 24/04/2023
Var
   n,c,nt:inteiro


Inicio
   escreval ("Digite 20 números para serem somados: " )
   para c de 1 ate 20 faca
      leia (n)
      nt<-nt+n
   fimpara
   escreval ("A média de seus números é: ",nt/20)
Fimalgoritmo