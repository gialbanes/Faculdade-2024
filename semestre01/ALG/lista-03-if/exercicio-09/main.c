#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int he, me, hs, ms, ht, mt, valor;


    printf("Digite a hora e o minuto de entrada: ");
    scanf("%d %d", &he, &me);

    printf("Digite a hora e o minuto de saída (HH MM): ");
    scanf("%d %d", &hs, &ms);

    ht = hs - he;
    mt = ms - me;

    if (ht < 0){
        printf("Você vai pagar o valor de uma diária!");
    } else {
     if (ht == 1 && mt == 0) {
        printf ("Você passou 1 hora no estacionamento, pague R$4,00!");
    } else {
        if (ht == 1 && mt != 0) {
            printf("Você passou mais de uma hora no estacionamento, pague R$6,00!");
        } else {
            if ( ht == 2 && mt == 0 ) {
                printf("Você passou 2 horas no estacionamento, pague R$6,00!");
            } else {
                if(mt == 0){
                    valor = (ht - 2) + 6;
                    printf("O valor a pagar pelo tempo que você passou no estacionamento é: %d \n", valor);
                }else{
                    valor = (ht - 2) + 7;
                    printf("O valor a pagar pelo tempo que você passou no estacionamento é: %d \n", valor);
                }
            }
        }
    }
    return 0;
}




}
