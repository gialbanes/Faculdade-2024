#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale( LC_ALL, "Portuguese");
    int numero, antecessor, sucessor;

    printf("Digite um n�mero:");
    scanf("%d", &numero);

    sucessor = numero+1;
    antecessor = numero-1;

    printf("O sucessor �: %d \n", sucessor);
    printf("O antecessor �: %d \n", antecessor);

}

