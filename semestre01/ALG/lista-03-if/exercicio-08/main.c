#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;

    printf("Digite o valor do lado A do tri�ngulo:");
    scanf("%d", &a);

    printf("Digite o valor do lado B do tri�ngulo:");
    scanf("%d", &b);

    printf("Digite o valor do lado C do tri�ngulo:");
    scanf("%d", &c);

    if ((a==b) && (b==c)) { //equilatero
        printf("O tri�ngulo � equil�tero!");
    } else {
        if ((a==b) && (b!=c)) {//is�sceles
            printf("O tri�ngulo � is�sceles!");
        } else { //escaleno
            printf("O tri�ngulo � escaleno!");
        }
    }
    return 0;
}
