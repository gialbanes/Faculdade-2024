#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    double ki, kf, cc, dp, gc;

    printf("Digite a quilometragem inicial do seu veículo:");
    scanf("%lf", &ki);

    printf("Digite a quilometragem final do seu veículo:");
    scanf("%lf", &kf);

    dp = kf - ki;
    printf("A distância percorrida foi de: %lf \n", dp);

    printf("Digite o consumo de combústivel em litros do seu veículo:");
    scanf("%lf", &cc);

    gc = dp/cc;
    printf("O consumo de combustível foi de: %.0lf \n", gc);
}
