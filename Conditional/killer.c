#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

const char* whatkiller(int count) {

    if (count < 2)
        return "INOCENTE";
    if (count < 3)
        return "SUSPEITA";
    if (count < 5)
        return "CUMPLICE";

    return "ASSASINO";
}

int whatyes(char responses[][4], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(!strcmp(responses[i],"sim"))
            count++;
    }
    return count;
}

int main(void) {
    char questionone[4],questiontwo[4],questionthree[4],questionfour[4],questionfive[4];
    int count;

    clear();
    puts(" ----- JOGO DO ASSASINO ----- ");
    printf("Telefonou para a vítima ?\n");
    scanf("%3s",questionone);

    printf("Esteve no local do crime ?\n");
    scanf("%3s",questiontwo);

    printf("Mora perto da vítima ?\n");
    scanf("%3s",questionthree);

    printf("Devia para a vítima ?\n");
    scanf("%3s",questionfour);

    printf("Já trabalhou com a vítima ?\n");
    scanf("%3s",questionfive);

    clear();
    char responses[5][4];
    strcpy(responses[0], questionone);
    strcpy(responses[1], questiontwo);
    strcpy(responses[2], questionthree);
    strcpy(responses[3], questionfour);
    strcpy(responses[4], questionfive);

    count = whatyes(responses,5);

    printf("%s",whatkiller(count));

    return 0;
}