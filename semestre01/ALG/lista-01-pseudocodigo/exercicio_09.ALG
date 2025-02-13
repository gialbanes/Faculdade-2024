Algoritmo "idade"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
idade_anos:inteiro
idade_meses:inteiro
idade_dias:inteiro
total:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a sua idade:")
leia(idade_anos)

escreval("Digite a sua idade em meses:")
leia(idade_meses)

escreval("Digite a sua idade em dias:")
leia(idade_dias)

total <- (idade_anos * 365) + (idade_meses * 30) + 1
escreval("A idade em dias é:", total)



Fimalgoritmo