Algoritmo "AP1_16"
// Descrição   : Pesquisa de satisfação
// Autor(a)    : Yan Braga da Silva
// Data atual  : 25/04/2023
Var
   sexo,sat:caractere
   m,f,hg,mg,hng,mng,n,gostaram,naog,i:inteiro
   porchng:real


Inicio
   escreval ("Digite o número de pessoas que foram entrevistadas: ")
   leia (n)

   repita
      escreval ("Escreva seu sexo em 'm' ou 'f': ")
      leia (sexo)
      se sexo="m" entao
         m <-m +1
         escreval ("Diga se gostou ou não: 's' para sim, 'n' para não")
         leia (sat)

         escolha sat
         caso "s"
            hg<-hg+1
         caso "n"
            hng<-hng+1
         outrocaso
            escreva ("Opção Inválida")
         fimescolha
      senao
         se sexo = "f" entao
            f<- f+1
            escreval ("Diga se gostou ou não: 's' para sim, 'n' para não")
            leia (sat)
            escolha sat
            caso "s"
               mg<-mg+1
            caso "n"
               mng<-mng+1
            outrocaso
               escreva ("Opção Inválida")
            fimescolha
         senao
            escreva ("Sexo inválido")
         fimse
      fimse

      i<-i+1
      n<-n-1
   ate n=0
   porchng<-((hng/i)*100)

   gostaram<-hg+mg
   naog<-hng+mng
   escreval ("Responderam à pesquisa ",m," homens e ",f," mulheres")
   escreval ("Dos quais ",gostaram," gostaram e ",naog," não gostaram")
   escreval (porchng,"% dos homens não gostaram em comparação ao total")
   se hg>mg entao
      escreval ("O produto foi melhor aceito dente os homens")
   senao
      se hg<mg entao
         escreva ("O produto foi melhor aceito dentre as mulheres")
      senao
         escreva("O produto foi igualmente aceito dentre os dois sexos")
      fimse
   fimse


Fimalgoritmo