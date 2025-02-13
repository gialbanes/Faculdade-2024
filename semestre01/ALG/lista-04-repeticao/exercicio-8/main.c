#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, i;
    float fatorial=1;

    printf("Digite um valor inicial para visualizá-lo fatorado:");
    scanf("%d", &a);

    printf("%d! = %d", a, a);
    for(i=a; i>1; i--){
        printf(" X %d", i-1);
            fatorial = fatorial * i;
    }
    printf(" = %.0f", fatorial);
    return 0;
}
