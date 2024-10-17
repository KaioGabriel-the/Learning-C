#include <stdio.h>

const char* dayweek(int day) {
    switch(day) {
        case 1: return "Segunda - feira";
        case 2: return "Terça - feira";
        case 3: return "Quarta - feira";
        case 4: return "Quinta - feira";
        case 5: return "Sexta - feira";
        case 6: return "Sábado";
        case 7: return "Domingo";
        default: return "Nenhum dia encontrado";
    }
}
int main(void) {
    int number;

    printf("Digite um numero de 1-7: ");
    scanf("%d", &number);

    printf("%s",dayweek(number));
    return 0;
}