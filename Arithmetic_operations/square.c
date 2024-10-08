#include <stdio.h>

int main(void){
    //Inicialização;
    float side,area;

    //Entrada;
    printf("DIGITE O LADO DO QUADRADO: ");
    scanf("%f",&side);

    //Processamento;
    area = side*side;

    //Saída;
    printf("A ÁREA É %.2f", area);
    return 0;
}