#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    //DECLARAR O VETOR COM 10 POSI��ES
    int vet[TAM], i;

    //ACESSAR TODAS AS POSI��ES DO VETOR
    for(i=0; i<TAM; i++){
        //SOLICITAR DADOS AO USU�RIO
        printf("Informe o valor:");
        scanf("%d", &vet[i]);
    }

    //IMPRIMIR TODOS OS VALORES DO VETOR
    for(i=0; i<TAM; i++){
        printf("%d", vet[i]);
    }

     //IMPRIMIR TODOS OS VALORES PARES DO VETOR
    for(i=0; i<TAM; i++){
        if(vet[i] % 2 == 0){
            printf("%d", vet[i]);
        }
    }

     //IMPRIMIR TODOS OS VALORES �MPARES DO VETOR
    for(i=0; i<TAM; i++){
        if(vet[i] % 2 != 0){
            printf("%d", vet[i]);
        }
    }
    return 0;
}
