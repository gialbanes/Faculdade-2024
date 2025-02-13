#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0, numero, qtd_0_25=0, qtd_26_50=0, qtd_51_75=0, qtd_76_100=0;

    printf("Digite os números desejados (digite um número negativo para parar): \n");

    while (i>=0){
        printf("Número:");
        scanf("%d", &numero);

        if (numero < 0){
            break;
        }

    if(numero>=0 && numero<=25){
        qtd_0_25++;
    } else {
        if (numero>=26 && numero<=50){
            qtd_26_50++;
        } else {
            if(numero>=51 && numero<=75){
                qtd_51_75++;
            } else {
                if(numero>=76 && numero<=100){
                    qtd_76_100++;
                }
            }
        }
    }
}

    printf("A quantidade de números no intervalo de 0-25 é: %d \n", qtd_0_25);
    printf("A quantidade de números no intervalo de 26-50 é: %d \n", qtd_26_50);
    printf("A quantidade de números no intervalo de 51-75 é: %d \n", qtd_51_75);
    printf("A quantidade de números no intervalo de 76-100 é: %d \n", qtd_76_100);
    i++;
    return 0;
}
