#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float pe, cod1, cod2, cod3, cod4;
    int cp;

    printf("Digite o pre�o da etiqueta do produto:");
    scanf("%f", &pe);

    printf("Digite o c�digo da condi��o de pagamento entre 1 e 4:");
    scanf("%d", &cp);

    switch (cp){
    case 1:
        cod1 = pe - (pe*0.1);
        printf("O valor a seguir est� com 10%% de desconto e voc� ter� que pagar � vista em dinheiro ou cart�o: %.2f \n", cod1);
        break;

    case 2:
        cod2 = pe - (pe*0.05);
        printf("O valor a seguir est� com 5%% de desconto e voc� ter� que pagar a vista com cart�o de cr�dito: %.2f \n", cod2);
        break;

    case 3:
        cod3 = pe/2;
        printf("O valor a seguir e o que est� na etiqueta parcelado em 2 vezes sem juros: %.2f \n", cod3);
        break;

    case 4:
        cod4 = (pe + (pe*0.1))/3;
        printf("O valor a seguir � o que est� na etiqueta com acr�scimo de 10%% parcelado em 3 vezes: %.2f \n", cod4);

        default:
            printf("C�digo inv�lido");
    }
    return 0;
}
