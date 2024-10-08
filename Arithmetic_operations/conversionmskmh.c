#include <stdio.h>

int main(void){
    //Inicialização;
    float ms, kmh;

    //Entrada;
    printf("DIGITE A VELOCIDADE EM M/S: ");
    scanf("%f",&ms);

    //Processamento
    kmh = ms * 3.6;

    //Saída
    printf("O RESULTADO É %.2f", kmh);
    return 0;
}