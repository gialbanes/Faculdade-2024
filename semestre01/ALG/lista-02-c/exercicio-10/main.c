#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    int periodo_seg, hr_totais, min_resto, min_totais, seg_totais;

    printf("Digite um per�odo de tempo em segundos:");
    scanf("%d", &periodo_seg);

    hr_totais = periodo_seg/3600;
    min_resto = periodo_seg%3600;
    min_totais = min_resto/60;
    seg_totais = min_resto%60;

    printf("A quantidade de horas totais �: %d \n", hr_totais);
    printf("A quantidade de minutos totais �: %d \n", min_totais);
    printf("A quantidade de segundos totais �: %d \n", seg_totais);

    printf("Portanto, a hora �: %d %d %d \n", hr_totais, min_totais, seg_totais);



}
