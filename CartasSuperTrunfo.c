#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    char estado;
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro de Cartas");
                 printf("\n");

      printf("Carta 01");
    printf("Digite a letra do Estado (A - H): ");
        scanf("%s", &estado);
    printf("Digite o código da Carta (01 - 04): ");
        scanf("%d", &codigo);
    printf("Digite o nome da Cidade: ");
        scanf("%s", &nome);
    printf("Digite o número de populções: ");
        scanf("%d", &populacao);
    printf("Digite a Área (em km²): ");
        scanf("%f", &area);
    printf("Digite o PIB: ");
        scanf("%f", &pib);
    printf("Digite o número de pontos Turísticos: ");
        scanf("%d", &pontosturisticos);

                 printf("\n");
    
      printf("Carta 02");
    printf("Digite a letra do Estado (A - H): ");
        scanf("%s", &estado);
    printf("Digite o código da Carta (01 - 04): ");
        scanf("%d", &codigo);
    printf("Digite o nome da Cidade: ");
        scanf("%s", &nome);
    printf("Digite o número de populções: ");
        scanf("%d", &populacao);
    printf("Digite a Área (em km²): ");
        scanf("%f", &area);
    printf("Digite o PIB: ");
        scanf("%f", &pib);
    printf("Digite o número de pontos Turísticos: ");
        scanf("%d", &pontosturisticos);




    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
