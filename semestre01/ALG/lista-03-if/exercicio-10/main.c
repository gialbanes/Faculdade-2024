#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float pe, cod1, cod2, cod3, cod4;
    int cp;

    printf("Digite o preço da etiqueta do produto:");
    scanf("%f", &pe);

    printf("Digite o código da condição de pagamento entre 1 e 4:");
    scanf("%d", &cp);

    switch (cp){
    case 1:
        cod1 = pe - (pe*0.1);
        printf("O valor a seguir está com 10%% de desconto e você terá que pagar à vista em dinheiro ou cartão: %.2f \n", cod1);
        break;

    case 2:
        cod2 = pe - (pe*0.05);
        printf("O valor a seguir está com 5%% de desconto e você terá que pagar a vista com cartão de crédito: %.2f \n", cod2);
        break;

    case 3:
        cod3 = pe/2;
        printf("O valor a seguir e o que está na etiqueta parcelado em 2 vezes sem juros: %.2f \n", cod3);
        break;

    case 4:
        cod4 = (pe + (pe*0.1))/3;
        printf("O valor a seguir é o que está na etiqueta com acréscimo de 10%% parcelado em 3 vezes: %.2f \n", cod4);

        default:
            printf("Código inválido");
    }
    return 0;
}
