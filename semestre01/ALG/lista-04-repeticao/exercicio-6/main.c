#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Gere os números ímpares entre 100 e 200:\n");

    for (numero = 101; numero < 200; numero += 2) {
        printf("%d\n", numero);
    }

    return 0;
}
