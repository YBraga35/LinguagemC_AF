Algoritmo "AP1_4"
// Disciplina  :  Algortimos e Programação
// Professor   : Luciano Blomberg
// Descrição   : Calculo da nota para um aluno ser aprovado
// Autor(a)    : Yan Braga da Silva
// Data atual  : 24/04/2023
Var
   n1,n2,n3,media:real


Inicio
   escreval ("Digite o valor das três notas em ordem: ")
   leia (n1,n2,n3)
   media<- (n1*3+n2*2+n3*5)/10
   se media>=7 entao
      escreva("Você foi aprovado! Sua média foi: ", media)
   senao
      escreva ("Você foi reprovado! Sua média foi: ", media)
   fimse

Fimalgoritmo