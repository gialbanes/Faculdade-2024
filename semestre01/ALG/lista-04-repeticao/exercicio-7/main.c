#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i;

    printf("Digite um valor para N (1 a 10): ");
    scanf("%d", &n);

    if(n>0 && n<11){
    for (i=0; i<=10; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }
    }else{
        printf("Valor inválido! Digite um número de 1 a 10.");
    }
    return 0;
}
