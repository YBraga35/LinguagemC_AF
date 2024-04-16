Algoritmo "AP1_6"
// Disciplina  :  Algortimos e Programação
// Professor   : Luciano Blomberg
// Descrição   : Três valores em ordem crecente
// Autor(a)    : Yan Braga da Silva
// Data atual  : 24/04/2023
Var
   x,y,z:real


Inicio
   escreval ("Digite três valores: ")
   leia (x,y,z)
   se (x<y) E (x<z) E (y<z) entao
      escreval (x,y,z)
   senao
      se (x<y) E (x<z) E (z<y) entao
         escreval (x,z,y)
      senao
         se (y<x) E (y<z) E (x<z)  entao
            escreval (y,x,z)
         senao
            se (y<x) E (y<z) E (z<x) entao
               escreva (y,z,x)
            senao
               se (z<y) E (z<x) E (y<x) entao
                  escreva (z,y,x)
               senao
                  se (z<y) E (z<x) E (x<y) entao
                     escreva (z,x,y)
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse




Fimalgoritmo