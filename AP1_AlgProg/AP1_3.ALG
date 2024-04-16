Algoritmo "AP1_3"
// Disciplina  :  Algortimos e Programação
// Professor   : Luciano Blomberg
// Descrição   : Aqui será informado um valor e se ele for positivo, será dado a sua metade, se for negativo, seu quadrado
// Autor(a)    : Yan Braga da Silva
// Data atual  : 24/04/2023
Var
   x:real


Inicio
   escreval ("Digite o valor de X: ")
   leia (x)
   se x>0 entao
      escreva (x/2)
   senao
      se x<0 entao
         escreva (x*x)
      senao
         escreva ("X é igual a 0")
      fimse
   fimse

Fimalgoritmo