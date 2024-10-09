#include <stdio.h>

int main(void) {
    //Inicialização;
    float celsius, fahrenheit;

    //Entrada;
    puts("DIGITE A TEMPERATURA EM CELSIUS: ");
    scanf("%f",&celsius);

    //Processamento;
    fahrenheit = (9 * celsius + 160 )/ 5;

    //Saída;
    printf("A TEMPERATURA EM FAHRENHEIT É %.2f", fahrenheit);
    return 0;
}