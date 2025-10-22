#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[30];      // Nome do território (até 29 caracteres + '\0')
    char cor[10];       // Cor do exército (até 9 caracteres + '\0')
    int tropas;         // Número de tropas
} Territorio;

int main() {
    // Declaração de um vetor de structs Territorio para armazenar 5 territórios
    Territorio territorios[5];

    // Laço for para preencher os dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);

        // Entrada do nome do território
        printf("Nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        // Remove a quebra de linha do final da string, se existir
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0;

        // Entrada da cor do exército
        printf("Cor do exercito: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        // Remove a quebra de linha do final da string, se existir
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0;

        // Entrada do número de tropas
        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
        // Limpa o buffer de entrada para evitar problemas com a próxima iteração
        while (getchar() != '\n');
    }

    // Exibição dos dados de cada território
    printf("\nDados dos territorios:\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Numero de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
