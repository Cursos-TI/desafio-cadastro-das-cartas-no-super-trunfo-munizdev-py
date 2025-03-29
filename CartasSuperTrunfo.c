#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turisticos1, turisticos2;
    float densidade;
    float PPC;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("                      🃏===== Países - Cadastro das Cartas ======🃏 \n");

    printf("\n");

      printf("  ◻️ Carta 1️⃣\n");

        printf("\n");

    printf("Digite a letra do Estado (A - H): ");
        scanf("%c", &estado1);
    printf("Digite o código da Carta (01 - 04): ");
        scanf("%s", &codigo1);
    printf("Digite o nome da Cidade: ");
        scanf("%s", &nome1);
    printf("Digite o número de populações: ");
        scanf("%d", &populacao1);
    printf("Digite a Área (em km²): ");
        scanf("%f", &area1);
    printf("Digite o PIB: ");
        scanf("%f", &PIB1);
    printf("Digite o número de pontos Turísticos: ");
        scanf("%d", &turisticos1);

            densidade = populacao1 / area1;

            PPC = PIB1 / populacao1;

        printf("\n");
    
      printf("  ◻️ Carta 2️⃣\n");

        printf("\n");

    printf("Digite a letra do Estado (A - H): ");
        scanf("%s", &estado2);
    printf("Digite o código da Carta (01 - 04): ");
        scanf("%s", &codigo2);
    printf("Digite o nome da Cidade: ");
        scanf("%s", &nome2);
    printf("Digite o número de populações: ");
        scanf("%d", &populacao2);
    printf("Digite a Área (em km²): ");
        scanf("%f", &area2);
    printf("Digite o PIB: ");
        scanf("%f", &PIB2);
    printf("Digite o número de pontos Turísticos: ");
        scanf("%d", &turisticos2);

            densidade = populacao2 / area2;

            PPC = PIB2 / populacao2;

        printf("\n");
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCartas cadastradas com sucesso! ✅\n");

        printf("\n");

    printf(" ◻️ CARTA 01 🂱 \n");

    printf("\n");

    printf("🛣️   Estado: %c\n", estado1);
      
    printf("🆔  Código: %s\n", codigo1);
        
    printf("🏙️   Nome: %s\n", nome1);
      
    printf("👥  População: %d\n", populacao1);
      
    printf("📏  Área: %.2f Km²\n", area1);
       
    printf("💸  PIB: %.2f bilhões de reais\n", PIB1);
        
    printf("📸  Número de Pontos Turísticos: %d\n", turisticos1);

    printf("📍  Densidade Populacional: %.2f hab/km²\n", densidade);

    printf("💲  PIB per Capita: R$ %.2f\n", PPC);
        

        printf("\n");

    printf(" ◻️ CARTA 02 🂱 \n");

    printf("\n");

    printf("🛣️   Estado: %c\n", estado2);
        
    printf("🆔  Código: %s\n", codigo2);
        
    printf("🏙️   Nome: %s\n", nome2);
        
    printf("👥  População: %d\n", populacao2);
        
    printf("📏  Área: %.2f Km²\n", area2);
        
    printf("💸  PIB: %.2f bilhões de Reais\n", PIB2);
        
    printf("📸  Número de Pontos Turísticos: %d\n", turisticos2);

    printf("📍  Densidade Populacional: %.2f hab/km²\n", densidade);

    printf("💲  PIB per Capita: R$ %.2f\n", PPC);

        printf("\n");

    return 0;
}
