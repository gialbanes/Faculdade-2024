#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main (){
    setlocale( LC_ALL, "Portuguese");
    int temperatura;
    double celsius;

    printf("Digite a temperatura em Farenheit:");
    scanf("%d", &temperatura);

    celsius = (temperatura-32)/1.8;
    printf("A conversão da temperatura em Farenheit para Celsius é: %.0lf \n", celsius);
}

