#include <stdio.h>

int main(void){
    //Inicialização;
    int increase; 
    float salary;

    //Entrada;
    printf("DIGITE A PORCENTAGEM DO AUMENTO DO SÁLARIO(EX: 25): ");
    scanf("%d", &increase);

    printf("DIGITE O SÁLARIO ATUAL: ");
    scanf("%f", &salary);

    //Processamento;
    salary += salary * ((float)increase / 100); 
    
    //Saída
    printf("O SÁLARIO APÓS O AUMENTO É %.2f", salary);
    return 0;
}