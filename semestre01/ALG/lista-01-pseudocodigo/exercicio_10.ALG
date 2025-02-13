Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
periodo_seg:inteiro
hr_totais:inteiro
min_resto:inteiro
min_totais:inteiro
seg_totais:inteiro



Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Escreva um período de tempo em segundos:")
leia(periodo_seg)

hr_totais <- periodo_seg\3600
min_resto <- periodo_seg%3600
min_totais <- min_resto\60
seg_totais <- min_resto%60


escreval("A quantidade de horas é:", hr_totais)
escreval("A quantidade de minutos é:", min_totais)
escreval("A quantidade de segudos é:", seg_totais)
escreval("Portanto a hora é:", hr_totais, "h", min_totais, "min", seg_totais, "s")


Fimalgoritmo