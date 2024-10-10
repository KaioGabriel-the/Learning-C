#include <stdio.h>

int verificationDate(int daynow, int day, int monthnow, int month, int yearnow, int year) {

    if((day <= daynow || day <=31) && ( month<= monthnow || month <= 12) && (year <= yearnow)) {
        return 1;
    }

    return 0;

}

int main(void) {
    //Inicialização;
    int daynow, day, monthnow, month, yearnow, year, result;

    //Entrada;
    printf("DIGITE O DIA ATUAL: ");
    scanf("%d",&daynow);

    printf("DIGITE O DIA QUE DESEJA VERIFICAR: ");
    scanf("%d",&day);

    printf("DIGITE O MÊS ATUAL: ");
    scanf("%d",&monthnow);

    printf("DIGITE O MÊS QUE DESEJA VERIFICAR: ");
    scanf("%d",&month);

    printf("DIGITE O ANO ATUAL: ");
    scanf("%d",&yearnow);

    printf("DIGITE O ANO QUE DESEJA VERIFICAR: ");
    scanf("%d",&year);

    //Processamento;
    result = verificationDate(daynow, day, monthnow, month, yearnow,year);
    if (result == 1) {
        printf("DATA LEGAL!!!");
    }else {
        printf("DATA INLEGAL!!!");
    }

    return 0;
}