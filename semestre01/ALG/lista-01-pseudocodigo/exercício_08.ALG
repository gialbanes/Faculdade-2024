Algoritmo "peças"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
ipi:inteiro
cod1:inteiro
val1:inteiro
qtd1:inteiro
cod2:inteiro
val2:inteiro
qtd2:inteiro
val_total:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a porcentagem de IPI a ser acrescido no valor das peças:")
leia(ipi)

escreval("Digite o código da primeira peça")
leia(cod1)
escreval("Digite o valor da primeira peça:")
leia(val1)
escreval("Digite a quantiadade da primeira peça:")
leia(qtd1)

escreval("Digite o código da segunda peça:")
leia(cod2)
escreval("Digite o valor da segunda peça:")
leia(val2)
escreval("Digite a quantiadade da segunda peça:")
leia(qtd2)

escreval("O código da primeira peça é", cod1, ", seu valor é R$", val1, " e são", qtd1, " quantidades")
escreval("O código da segunda peça é", cod2, ",seu valor é", val2, " e são", qtd2, " quantidades")

val_total <- ((val1 * qtd1) + (val2 * qtd2)) * ((ipi/100) + 1)

escreval("O valor toal das peças é: R$", val_total)
Fimalgoritmo