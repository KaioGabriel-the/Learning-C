#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    char* result = float(number % 2) != 0 ? "IMPAR":"PAR";
    printf("%s\n", result);

    return 0;
}