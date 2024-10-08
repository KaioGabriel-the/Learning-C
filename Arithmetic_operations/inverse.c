#include <stdio.h>

int main(void){
    //Inicialização;
    int number, hundred, ten, unit, inverse;

    //Entrada;
    printf("DIGITE UM NÚMERO DE TRÊS DIGITOS: ");
    scanf("%i",&number);

    //Processamento;
    hundred = number/100;
    ten = (number % 100) / 10;
    unit = number % 100 % 10;
    inverse = (unit * 100) + (ten * 10) + hundred;

    //Saída;
    printf("O NÚMERO INVERSO É %i", inverse);
}