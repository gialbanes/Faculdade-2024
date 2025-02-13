Algoritmo "cilindro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
altura:inteiro
raio:inteiro
volume: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a altura do cilíndro:")
leia(altura)
escreval("Digite o raio do cilíndro:")
leia(raio)
volume <- 3.14 * raio^2 * altura
escreval("O volume do cilíndro é:", volume)

Fimalgoritmo