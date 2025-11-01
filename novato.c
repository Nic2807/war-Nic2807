#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[10];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[5]; // vetor para 5 territórios
    int t;

    printf("Vamos cadastrar os dados dos 5 territorios.\n\n");

    for (t = 0; t < 5; t++) {
        printf("--- Cadastrando Territorio %d ---\n", t + 1);

        printf("Nome do Territorio %d:\n", t + 1);
        scanf("%s", territorios[t].nome);

        printf("Qual a cor do exercito?\n");
        scanf("%s", territorios[t].cor);

        printf("Quantas tropas tem esse territorio?\n");
        scanf("%d", &territorios[t].tropas);

        printf("\n");
    }

    // Mostrando os dados cadastrados
    printf("=== Dados Cadastrados ===\n");
    for (t = 0; t < 5; t++) {
    
        printf("Territorio %d:\n", t + 1);
        printf("Nome: %s\n", territorios[t].nome);
        printf("Cor: %s\n", territorios[t].cor);
        printf("Tropas: %d\n\n", territorios[t].tropas);
    }

    system("pause");
    return 0;
}
