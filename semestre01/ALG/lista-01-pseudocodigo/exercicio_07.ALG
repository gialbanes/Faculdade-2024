Algoritmo "gasolina"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
ki:inteiro
kf:inteiro
dp:inteiro
cc:inteiro
gc:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Digite a quilometragem inicial do seu automóvel:")
leia(ki)
escreval("Digite a quilometragem final do seu automóvel:")
leia(kf)
dp <- kf-ki
escreval("A distância percorrida foi de", dp,"km")

escreval("Digite o consumo de combustível em litros do seu automóvel:")
leia(cc)

gc <- dp / cc
escreval("O consumo do combustível foi de", gc,"km/L")
Fimalgoritmo