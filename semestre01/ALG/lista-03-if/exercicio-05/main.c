#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor_emprestimo, salario, valor_parcelas;
    int num_parcelas;

    printf("Digite o valor do empr�stimo:");
    scanf("%f", &valor_emprestimo);

    printf("Digite o n�mero de parcelas do empr�stimo:");
    scanf("%d", &num_parcelas);

    printf("Digite o sal�rio do solicitante do empr�stimo:");
    scanf("%f", &salario);

    valor_parcelas = valor_emprestimo/num_parcelas;
    printf("O valor de cada parcela �: %.2f \n", valor_parcelas);

    if (valor_parcelas <= (salario*0.3)) {
        printf("O empr�stimo est� aprovado!");
    } else {
        printf("O empr�stimo n�o foi aprovado!");
    }
    return 0;
}
