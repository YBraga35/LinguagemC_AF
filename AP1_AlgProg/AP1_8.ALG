Algoritmo "AP1_8"
// Disciplina  :  Algortimos e Programação
// Professor   : Luciano Blomberg
// Descrição   : soma dos algarismos de um número inteiro positivo
// Autor(a)    : Yan Braga da Silva
// Data atual  : 24/04/2023
Var
   n,c,d,u:inteiro


Inicio
   escreval ("Digite um número inteiro positivo menor que 1000: " )
   leia (n)
   se (n>1000) ou (n<0) entao
      escreva ("Número inválido")
   senao
      repita
         se (n>=500) entao
            n<-n-500
            c<-c+5
         senao
            se (n>=100) entao
               n<-n-100
               c<-c+1
            senao
               se (n>=50) entao
                  n<-n-50
                  d<-d+5
               senao
                  se (n>=10) entao
                     n<-n-10
                     d<-d+1
                  senao
                     se (n>=5) entao
                        n<-n-5
                        u<-u+5
                     senao
                        se (n>=0) entao
                           n<-n-1
                           u<-u+1
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      ate (n=0)
   fimse
   escreval("O seu número tinha ",c," centenas, ",d," dezenas e ", u," unidades")
   escreva("O somatório de seus algorismos é: ",c, " + ",d," + ",u," e totaliza: ",c+d+u)

Fimalgoritmo