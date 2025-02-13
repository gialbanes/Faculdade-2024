#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale( LC_ALL, "Portuguese");
    int comprimento, largura, altura, volume;

    printf("Digite o comprimento da caixa:");
    scanf("%d", &comprimento);

    printf("Digite o largura da caixa:");
    scanf("%d", &largura);

    printf("Digite o altura da caixa:");
    scanf("%d", &altura);

    volume = comprimento * largura * altura;
    printf("O volume da caixa retangular é: %d \n", volume);
}
