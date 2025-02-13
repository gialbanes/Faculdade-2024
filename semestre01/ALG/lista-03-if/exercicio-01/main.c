#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
    setlocale( LC_ALL, "Portuguese");
    int nota1, nota2;
    float media;

    printf("Digite sua nota na primeira avaliação:");
    scanf("%d", &nota1);

    printf("Digite sua nota na segunda avaliação:");
    scanf("%d", &nota2);

    media = (nota1 + nota2)/2;

    if (media < 7) {
        //reprovado
        printf("Você está reprovado, sua média foi: %.2f \n", media);
    } else{
        //aprovado
        printf("Você está aprovado, sua média foi: %.2f \n", media);
    }
    return 0;
}
