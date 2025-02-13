#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main (){
    setlocale( LC_ALL, "Portuguese");
    int velocidade;
    double conversao;

    printf("Digite uma velocidade em km/h:");
    scanf("%d", &velocidade);

    conversao = velocidade * 0.62;
    printf("A velocidade em km/h convertida em m/h é: %.2lf \n", conversao, "m/h");
}
