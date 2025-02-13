#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    double ipi, val1, val2, val_total;
    int cod1, cod2, qtd1, qtd2;

    printf("Digite a porcentagem de IPI que deve ser acrescido no valor das peças:");
    scanf("%lf", &ipi);

    printf("Digite o código da primeira peça:");
    scanf("%d", &cod1);

    printf("Digite o valor da primeira peça:");
    scanf("%lf", &val1);

    printf("Digite a quantidade de peças da priemeira peça:");
    scanf("%d", &qtd1);

    printf("Digite o código da segunda peça:");
    scanf("%d", &cod2);

    printf("Digite o valor da segunda peça:");
    scanf("%lf", &val2);

    printf("Digite a quantidade de peças da segunda peça:");
    scanf("%d", &qtd2);

    val_total = ((val1 * qtd1) + (val2 * qtd2)) * ((ipi/100) + 1);

    printf("O valor total a ser pago é: R$%.2lf \n", val_total);
}
