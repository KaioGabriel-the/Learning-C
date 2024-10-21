#include <stdio.h>   // Biblioteca para entrada e saída padrão
#include <stdlib.h>  // Biblioteca para funções de utilidade, como system()

// Definição da estrutura STUDENT para armazenar informações do aluno
struct STUDENT {
    char name[25];  // Array de caracteres para armazenar o nome do aluno (até 24 caracteres + 1 para o terminador nulo)
    int age;       // Inteiro para armazenar a idade do aluno
    char course[50]; // Array de caracteres para armazenar o curso do aluno (até 49 caracteres + 1 para o terminador nulo)
};

// Função para limpar a tela do console
void clear(void) {
#if defined(_WIN32) || defined(_WIN64)  // Verifica se o sistema é Windows
    system("cls");  // Comando para limpar a tela no Windows
#else
    system("clear"); // Comando para limpar a tela em sistemas Unix/Linux
#endif
}

// Função principal do programa
int main(void) {
    struct STUDENT aluno;  // Declara uma variável 'aluno' do tipo 'STUDENT'

    puts("DIGITE O NOME DO ALUNO: ");  // Solicita que o usuário digite o nome
    scanf("%24s", aluno.name);  // Lê o nome do aluno (até 24 caracteres)

    puts("DIGITE A IDADE DO ALUNO: ");  // Solicita que o usuário digite a idade
    scanf("%d", &aluno.age);  // Lê a idade do aluno e armazena na variável 'age'

    puts("DIGITE O CURSO DO ALUNO: ");  // Solicita que o usuário digite o curso
    scanf(" %[^\n]", aluno.course);  // Lê o curso do aluno, permitindo espaços até encontrar uma nova linha

    clear();  // Limpa a tela do console

    puts("ALUNO COMPUTADO...");  // Mensagem informando que os dados foram processados

    // Imprime as informações do aluno na tela
    printf("ALUNO: %s\n", aluno.name);   // Exibe o nome do aluno
    printf("IDADE: %d\n", aluno.age);       // Exibe a idade do aluno
    printf("CURSO: %s\n", aluno.course);    // Exibe o curso do aluno

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
