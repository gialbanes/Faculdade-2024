#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i=0, numero, numerosPares=0, numerosImpares=0, somaPares=0, somaTotal=0, numerosTotais=0;
    float mediaPares, mediaTotal;

    printf("Digite n�meros positivos (0 para encerrar):\n");

    while (i>=0) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if(numero%2==0){
            numerosPares++;
             somaPares += numero;
        } else {
            numerosImpares++;
        }

        numerosTotais++;
        somaTotal += numero;
        i++;
    }

        mediaPares = somaPares / numerosPares;
        mediaTotal = somaTotal / numerosTotais;

        printf("A quantidade de n�meros pares �: %d \n", numerosPares);
        printf("A quantidade de n�meros �mpares �: %d \n", numerosImpares);

        printf("A m�dia dos n�meros pares �: %f \n", mediaPares);
        printf("A m�dia de todos os n�meros �: %f \n", mediaTotal);


    return 0;
}
