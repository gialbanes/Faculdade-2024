#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main () {
    setlocale( LC_ALL, "Portuguese");
    int salario_minimo, salario_user, resultado;

    printf("Digite o valor do salário mínimo:");
    scanf("%d", &salario_minimo);

    printf("Digite o valor do seu salário:");
    scanf("%d", &salario_user);

    resultado = salario_minimo/salario_user;
    printf("O salário do usuário equivale a: %d \n", resultado, "salário(s) minímo(s)");
    }
