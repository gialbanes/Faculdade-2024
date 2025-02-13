#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float altura, maiorH=0, menorH=5000;
    int i;

    for(i=1; i<=15; i++){
        printf("Digite a altura da pessoa %d:", i);
        scanf("%f", &altura);


        if (altura > maiorH){
            maiorH = altura;
        }
        if(altura < menorH){
            menorH = altura;
        }
    }

    printf("A maior altura é: %.2f \n", maiorH);
    printf("A menor altura é: %.2f \n", menorH);
}
