#include <stdio.h>

float whatpercentage(float salaryactual) {
    if (salaryactual <= 280.0)
        return 20;
    if (salaryactual <= 700.0)
        return 15;
    if (salaryactual <= 1500.0)
        return 10;
    return 5;
}

int main(void) {
    float salaryactual, risesalary, newsalary, percentage;

    printf("Qual o seu salario atual: ");
    scanf("%f", &salaryactual);

    percentage = whatpercentage(salaryactual);
    risesalary = salaryactual * (percentage / 100);
    newsalary = salaryactual + risesalary;

    printf(" ----- AUMENTO DO SALÁRIO ----- \n*SALÁRIO ATUAL: %.2f \n*PORCENTAGEM DO AUMENTO: %.0f \n*VALOR DO AUMENTO: %.2f \n*NOVO SALÁRIO: %.2f",salaryactual,percentage,risesalary,newsalary);

    return 0;
}