Algoritmo "AP1_13"
// Descrição   : Usuário entra valores para a base e expoente de uma potência
// Autor(a)    : Yan Braga da Silva
// Data atual  : 25/04/2023
Var
   // Seção de Declarações das variáveis
   base,expo,tot:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval ("Digite um valor que será a base de uma potência e em seguida seu expoente: ")
   leia (base,expo)
   expo<-expo-1

   repita
      se (expo=0)entao
         tot<-1
      senao
         se (tot=0) entao
            tot<-base*base
            expo<-expo-1
         senao
            se (expo=1) entao
               tot<-tot*base
               expo<-expo-1
            senao
               se (expo>1) entao
                  expo<-expo-1
                  tot<-tot*base
               fimse
            fimse
         fimse
      fimse
   ate (expo=0)
   escreva ("O resultado de sua exponenciação é: ",tot)




Fimalgoritmo