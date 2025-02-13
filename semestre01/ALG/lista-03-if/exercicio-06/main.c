#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int cod_prod;

    printf("Digite o código do produto:");
    scanf("%d", &cod_prod);

    switch(cod_prod){
    case 1:
        printf("Alimento não perecível");
        break;

        case 2:
        printf("Alimento perecível");
        break;

        case 3:
        printf("Alimento perecível");
        break;

        case 4:
        printf("Alimento perecível");
        break;

        case 5:
        printf("Vestuário");
        break;

        case 6:
        printf("Vestuário");
        break;

        case 7:
        printf("Higiene pessoal");
        break;

        case 8:
        printf("Utensílios domésticos");
        break;

        case 9:
        printf("Utensílios domésticos");
        break;

        case 10:
        printf("Utensílios domésticos");
        break;

        default:
            printf("Código inválido");
    }
    return 0;
