#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    double ipi, val1, val2, val_total;
    int cod1, cod2, qtd1, qtd2;

    printf("Digite a porcentagem de IPI que deve ser acrescido no valor das pe�as:");
    scanf("%lf", &ipi);

    printf("Digite o c�digo da primeira pe�a:");
    scanf("%d", &cod1);

    printf("Digite o valor da primeira pe�a:");
    scanf("%lf", &val1);

    printf("Digite a quantidade de pe�as da priemeira pe�a:");
    scanf("%d", &qtd1);

    printf("Digite o c�digo da segunda pe�a:");
    scanf("%d", &cod2);

    printf("Digite o valor da segunda pe�a:");
    scanf("%lf", &val2);

    printf("Digite a quantidade de pe�as da segunda pe�a:");
    scanf("%d", &qtd2);

    val_total = ((val1 * qtd1) + (val2 * qtd2)) * ((ipi/100) + 1);

    printf("O valor total a ser pago �: R$%.2lf \n", val_total);
}
