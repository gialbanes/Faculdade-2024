#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um n�mero qualquer:");
    scanf("%d", &num);


    if (num%2==0) {
        printf("O n�mero que voc� digitou � par!");
    } else {
        printf("O n�mero que voc� digitou � �mpar!");
    }
    return 0;
}
