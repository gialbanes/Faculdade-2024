#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;

    printf("Digite o valor do lado A do triângulo:");
    scanf("%d", &a);

    printf("Digite o valor do lado B do triângulo:");
    scanf("%d", &b);

    printf("Digite o valor do lado C do triângulo:");
    scanf("%d", &c);

    if ((a==b) && (b==c)) { //equilatero
        printf("O triângulo é equilátero!");
    } else {
        if ((a==b) && (b!=c)) {//isósceles
            printf("O triângulo é isósceles!");
        } else { //escaleno
            printf("O triângulo é escaleno!");
        }
    }
    return 0;
}
