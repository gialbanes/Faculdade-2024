#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int cod_prod;

    printf("Digite o c�digo do produto:");
    scanf("%d", &cod_prod);

    switch(cod_prod){
    case 1:
        printf("Alimento n�o perec�vel");
        break;

        case 2:
        printf("Alimento perec�vel");
        break;

        case 3:
        printf("Alimento perec�vel");
        break;

        case 4:
        printf("Alimento perec�vel");
        break;

        case 5:
        printf("Vestu�rio");
        break;

        case 6:
        printf("Vestu�rio");
        break;

        case 7:
        printf("Higiene pessoal");
        break;

        case 8:
        printf("Utens�lios dom�sticos");
        break;

        case 9:
        printf("Utens�lios dom�sticos");
        break;

        case 10:
        printf("Utens�lios dom�sticos");
        break;

        default:
            printf("C�digo inv�lido");
    }
    return 0;
