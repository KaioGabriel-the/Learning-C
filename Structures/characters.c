#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca para funções de alocação de memória e controle de processos

// Define uma estrutura chamada CHARACTERS para armazenar informações sobre personagens
typedef struct {
    char name[25];             // Array de caracteres para armazenar o nome do personagem
    char characters_class[25]; // Array de caracteres para armazenar a classe do personagem
    int power;                 // Inteiro para armazenar o poder do personagem
} CHARACTERS;

// Função para limpar a tela do console
void clear(void) {
#if defined(_WIN32) || defined(_WIN64)  // Verifica se o sistema operacional é Windows
    system("cls");  // Comando para limpar a tela no Windows
#else
    system("clear"); // Comando para limpar a tela em sistemas Unix/Linux
#endif
}

// Função principal do programa
int main(void) {
    CHARACTERS *characters; // Ponteiro para uma lista de personagens
    int size;               // Variável para armazenar o tamanho do array de personagens
    char namefile[25];     // Array para armazenar o nome do arquivo

    puts("Digite o tamanho do array: "); // Solicita ao usuário o tamanho do array
    scanf("%d", &size);                    // Lê o tamanho do array

    // Aloca memória para o número de personagens especificado pelo usuário
    characters = (CHARACTERS*) malloc(size * sizeof(CHARACTERS));

    // Loop para coletar informações sobre cada personagem
    for(int i = 0; i < size; i++) {
        printf("Digite o nome do personagem %d: ", i + 1); // Solicita o nome do personagem
        scanf("%24s", characters[i].name);                 // Lê o nome e armazena na estrutura

        printf("Digite a classe do personagem %d: ", i + 1); // Solicita a classe do personagem
        scanf("%24s", characters[i].characters_class);      // Lê a classe e armazena na estrutura

        printf("Digite a quantidade de poder do personagem %d: ", i + 1); // Solicita o poder do personagem
        scanf("%d", &characters[i].power);                  // Lê o poder e armazena na estrutura
    }

    clear(); // Limpa a tela após coletar as informações

    // Loop para exibir as informações coletadas sobre cada personagem
    for(int i = 0; i < size; i++) {
        printf("Personagem: %s \n", characters[i].name);           // Exibe o nome do personagem
        printf("Classe: %s \n", characters[i].characters_class);   // Exibe a classe do personagem
        printf("Poder: %d \n \n", characters[i].power);            // Exibe o poder do personagem
    }

    clear(); // Limpa a tela novamente

    puts("Vamos gravar esses dados em um arquivo!!!\n"); // Mensagem informando que os dados serão salvos
    puts("Digite o nome do arquivo: "); // Solicita ao usuário o nome do arquivo
    scanf("%24s", namefile); // Lê o nome do arquivo

    char filename[30]; // Array para armazenar o nome do arquivo com extensão
    snprintf(filename, sizeof(filename), "%s.txt", namefile); // Formata o nome do arquivo para incluir a extensão .txt

    FILE *file = fopen(filename, "w"); // Abre o arquivo para escrita
    // Loop para gravar as informações de cada personagem no arquivo
    for(int i = 0; i < size; i++) {
        fprintf(file, "Personagem: %s", characters[i].name); // Escreve o nome do personagem no arquivo
        fprintf(file, "Classe: %s", characters[i].characters_class); // Escreve a classe no arquivo
        fprintf(file, "Power: %d \n", characters[i].power); // Escreve o poder no arquivo
    }

    fclose(file); // Fecha o arquivo após a gravação

    clear(); // Limpa a tela novamente

    puts("Arquivo gravado!!!"); // Mensagem informando que o arquivo foi salvo
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
