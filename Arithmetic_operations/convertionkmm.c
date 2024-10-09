#include <stdio.h>

int main(void) {
    //Inicialização;
    float m, km;

    //Entrada;
    puts("DIGITE A QUANTIDADE DE METROS QUE DESEJA TRANSFORMA: ");
    scanf("%f",&m);

    //Processamento;
    km = m/1000;

    //Saída;
    printf("O VALOR EM KM É %.2f", km);
    return 0;
}