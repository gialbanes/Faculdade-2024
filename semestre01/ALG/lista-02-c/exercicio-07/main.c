#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    double ki, kf, cc, dp, gc;

    printf("Digite a quilometragem inicial do seu ve�culo:");
    scanf("%lf", &ki);

    printf("Digite a quilometragem final do seu ve�culo:");
    scanf("%lf", &kf);

    dp = kf - ki;
    printf("A dist�ncia percorrida foi de: %lf \n", dp);

    printf("Digite o consumo de comb�stivel em litros do seu ve�culo:");
    scanf("%lf", &cc);

    gc = dp/cc;
    printf("O consumo de combust�vel foi de: %.0lf \n", gc);
}
