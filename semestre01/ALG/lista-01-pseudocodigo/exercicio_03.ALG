Algoritmo "salario"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
sal_min: inteiro
sal_user: inteiro
calculo: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Qual é o salário mínimo?")
leia(sal_min)

escreval("Qual é o seu salário?")
leia(sal_user)

calculo <- sal_min / sal_user
escreval("A quantidade de salários mínimos que esse usuário recebe é:", calculo)

Fimalgoritmo