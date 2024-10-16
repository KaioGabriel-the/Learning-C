#include <stdio.h>

const char* what_triangle(float sideone, float sidetwo, float sidethree) {
    if(sideone == sidethree && sidetwo == sidethree)
        return  "É UM TRIANGULO EQUILATERO";
    if (sideone == sidetwo || sideone == sidethree || sidetwo == sidethree)
        return "É UM TRIÂNGULO ISÓCELES";

    return "É UM TRIÂNGULO ESCALENO";
}

const char* true_triangle(float sideone, float sidetwo, float sidethree) {
    if((sideone + sidetwo <= sidethree) ||
        (sideone + sidethree <= sidetwo) ||
        (sidetwo + sidethree <= sideone)){
        return "NÃO É UM TRIANGULO";
    }
    return what_triangle(sideone, sidetwo,sidethree);
}

int main(void) {
    //Iniciaçização;
    float sideone, sidetwo, sidethree;

    //Entrada;
    printf("DIIGTE O VALOR DO PRIMEIRO LADO DO TRIANGULO: ");
    scanf("%f", &sideone);

    printf("DIGITE O SEGUNDO LADO DO TRIANGULO: ");
    scanf("%f", &sidetwo);

    printf("DIGITE O TERCEIRO LADO DO TRIANGULO: ");
    scanf("%f", &sidethree);

    const char* result = true_triangle(sideone, sidetwo, sidethree);
    printf("%s",result);

    return 0;
}