#include <math.h>
#include <stdio.h>

int main(void){
    //Inicialização;
    float PI, ray, size;

    //Entrada;
    puts("DIGITE O RAIO DA ESFERA: ");
    scanf("%f",&ray);

    //Processamento;
    PI = 3.14;
    size = (4*PI*pow(ray,3)) / 3;

    //Saída
    printf("O VOLUME DA ESFERA É %.2f", size);
    return 0;
}