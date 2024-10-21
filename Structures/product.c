#include <stdio.h>
#include <stdlib.h>

struct PRODUCT {
    char name[25];
    char category[25];
    float value;
};

// Função para limpar a tela do console
void clear(void) {
#if defined(_WIN32) || defined(_WIN64)  // Verifica se o sistema é Windows
    system("cls");  // Comando para limpar a tela no Windows
#else
    system("clear"); // Comando para limpar a tela em sistemas Unix/Linux
#endif
}

int main(void) {
    struct PRODUCT product[2];

    for(int i = 0;i < sizeof(product)/sizeof(product[0]);i++){

        puts("DIGITE O NOME DO PRODUTO: ");
        scanf("%24s",product[i].name);

        puts("DIGITE A CATEGORIA DO PRODUTO: ");
        scanf("%24s",product[i].category);

        puts("DIGITE O VALOR DO PRODUTO: ");
        scanf("%f",product[i].value);
    }

    clear();
    puts("OS PRODUTOS FORAM COMPUTADOS...");
    puts(" ----- LISTA DE PRODUTOS ----- \n");

    for (int i = 0;i < sizeof(product)/sizeof(product[0]);i++) {
        printf("PRODUTO: %s",product[i].name);
        printf("CATEGORIA DO PRODUTO: %s",product[i].category);
        printf("O VALOR DO PRODUTO: %f",product[i].value);
    }

    return 0;
}