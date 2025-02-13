#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale( LC_ALL, "Portuguese");
    int altura, raio;
    double volume;

    printf("Digite a altura do cilindro:");
    scanf("%d", &altura);

    printf("Digite o raio do cilindro:");
    scanf("%d", &raio);

    volume = 3.14 * (raio*raio) * altura;
    printf("O volume do cilindro é: %.2lf \n", volume);
}
