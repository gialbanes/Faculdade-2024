#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    int idade_anos, idade_meses, idade_dias, total;

    printf("Digite sua idade em anos:");
    scanf("%d", &idade_anos);

    printf("Digite sua idade em meses:");
    scanf("%d", &idade_meses);

    printf("Digite sua idade em dias:");
    scanf("%d", &idade_dias);

    total = (idade_anos * 365) + (idade_meses * 30) + 1;

    printf("A sua idade em dias é: %d \n", total);
}
