#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um número qualquer:");
    scanf("%d", &num);


    if (num%2==0) {
        printf("O número que você digitou é par!");
    } else {
        printf("O número que você digitou é ímpar!");
    }
    return 0;
}
