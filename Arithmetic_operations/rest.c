#include <stdio.h>

int main(void){
    //Inicialização;
    int elementone, elementtwo, division, rest;

    //Entrada;
    printf("DIGITE O DIVIDENDO: ");
    scanf("%i", &elementone);

    printf("DIGITE O DIVISOR: ");
    scanf("%i", &elementtwo);

    //Processamento
    division = elementone / elementtwo;
    rest = elementone % elementtwo;

    //Saída
    printf("O RESULDADO DA DIVISÃO É %i \nO RESTO DADIVISÃO É %i", division, rest);
    return 0;
}