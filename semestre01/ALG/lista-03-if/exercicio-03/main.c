#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;

    printf("Digite o primeiro n�mero:");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero:");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero:");
    scanf("%d", &num3);

    if (num1 > num2) {
        printf("O maior n�mero � o primeiro: %d \n", num1);
    } else {
        if (num2 > num3) {
            printf("O maior n�mero � o segundo: %d \n", num2);
        } else {
            printf("O maior n�mero � o terceiro: %d \n", num3);
        }
    }
    return 0;
}
