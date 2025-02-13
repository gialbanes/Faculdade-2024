#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int tempo, bonus;
    float salario, salario_total;

    printf("Digite o salário do funcionário:");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço do funcionário em anos:");
    scanf("%d", &tempo);

    if (tempo >= 5) {
        printf("O bônus que o funcionário recebeu foi de 20 por cento \n");

        salario_total = (salario*0.2) + salario;

        printf("O salário total do funcionário foi: %.2f \n", salario_total);
    } else {
        printf("O bônus que o funcionário recebeu foi de 10 por cento \n");

        salario_total = (salario*0.1) + salario;

        printf("O salário total do funcionário foi: %.2f \n", salario_total);
    }
    return 0;
}
