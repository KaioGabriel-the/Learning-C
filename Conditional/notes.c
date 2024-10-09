#include <stdio.h>

float get_positive_number(void) {
    float note;
    printf("DIGITE SUA NOTA: ");
    scanf("%f", &note);

    if(note>= 0 && note <= 10) {
        return note;
    }else{
        printf("DIGITE NOVAMENTE SUA NOTA \n");
       return get_positive_number();
    }
}

int main(void) {
    float noteone, notetwo, average;

    noteone = get_positive_number();
    notetwo = get_positive_number();
    average = (noteone + notetwo)/2;

    if(average >= 7){
        printf("APROVADO!!! \nMÉDIA: %.1f",average);
    }else if(average < 7 && average >=4) {
        printf("VOCÊ ESTÁ DE PROVA FINAL \nMÉDIA: %.1f\n",average);
        float finaltest = get_positive_number();
        float finalnote = (average + finaltest)/2;

        if (finalnote < 6){
            printf("VOCÊ FOI REPROVADO!!! \nMÉDIA: %.1f \n",finalnote);
        }else {
            printf("APROVADO COM PROVA FINAL!!! \nMÉDIA: %.1f \n",finalnote);
        }
    }else {
        printf("REPROVADO!!! \nMÉDIA: %.1f",average);
    }

    return 0;
}