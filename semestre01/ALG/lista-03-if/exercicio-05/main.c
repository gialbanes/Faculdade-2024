#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor_emprestimo, salario, valor_parcelas;
    int num_parcelas;

    printf("Digite o valor do empréstimo:");
    scanf("%f", &valor_emprestimo);

    printf("Digite o número de parcelas do empréstimo:");
    scanf("%d", &num_parcelas);

    printf("Digite o salário do solicitante do empréstimo:");
    scanf("%f", &salario);

    valor_parcelas = valor_emprestimo/num_parcelas;
    printf("O valor de cada parcela é: %.2f \n", valor_parcelas);

    if (valor_parcelas <= (salario*0.3)) {
        printf("O empréstimo está aprovado!");
    } else {
        printf("O empréstimo não foi aprovado!");
    }
    return 0;
}
