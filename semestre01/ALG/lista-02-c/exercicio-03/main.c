#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main () {
    setlocale( LC_ALL, "Portuguese");
    int salario_minimo, salario_user, resultado;

    printf("Digite o valor do sal�rio m�nimo:");
    scanf("%d", &salario_minimo);

    printf("Digite o valor do seu sal�rio:");
    scanf("%d", &salario_user);

    resultado = salario_minimo/salario_user;
    printf("O sal�rio do usu�rio equivale a: %d \n", resultado, "sal�rio(s) min�mo(s)");
    }
