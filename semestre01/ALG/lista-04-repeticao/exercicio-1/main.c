#include <stdio.h>
#include <stdlib.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;

    for (int i=1; i<=500; i++){
        if (i%2!=0 && i%3==0){
            soma += i;
        }
    }
        printf("A soma de todos os n�meros �mpares e m�ltiplos de 3 �: %d \n", soma);
        return 0;
}
