#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media, percentualPositivos, percentualNegativos;
    int i = 1, valor, soma = 0, totalValores, contadorPositivos = 0, contadorNegativos = 0;

    printf("Digite os valores (digite 0 para terminar):\n");

    while (i > 0) {
        printf("Valor: ");
        scanf("%d", &valor);

        if (valor == 0) {
            break;
        }

        soma += valor;

        if (valor > 0) {
            contadorPositivos++;
        } else if (valor < 0) {
            contadorNegativos++;
        }
        i++;
    }


        totalValores = i-1;
        media = soma / totalValores;
        percentualPositivos = ((float)contadorPositivos / (float)totalValores) * 100;
        percentualNegativos = ((float)contadorNegativos / (float)totalValores) * 100;

        printf("Média aritmética: %.2f\n", media);
        printf("Quantidade de valores positivos: %d\n", contadorPositivos);
        printf("Quantidade de valores negativos: %d\n", contadorNegativos);
        printf("Percentual de valores positivos: %.2f%%\n", percentualPositivos);
        printf("Percentual de valores negativos: %.2f%%\n", percentualNegativos);

        return 0;
}
