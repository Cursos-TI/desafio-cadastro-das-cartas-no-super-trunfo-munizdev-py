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
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float PPC1, PPC2;
    float superPoder1, superPoder2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("                      🃏===== Países - Cadastro das Cartas ======🃏 \n");

    printf("\n");

      printf("  ◻️ Carta 1️⃣\n");

        printf("\n");

    printf("Digite a letra do Estado (A - H): ");
        scanf(" %c", &estado1);

    printf("Digite o código da Carta (01 - 04): ");
        scanf("%s", codigo1);
    getchar();
    printf("Digite o nome da Cidade: ");
        scanf(" %[^\n]s", nome1);

    printf("Digite o número de populações: ");
        scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
        scanf("%f", &area1);

    printf("Digite o PIB: ");
        scanf("%f", &PIB1);

    printf("Digite o número de pontos Turísticos: ");
        scanf("%d", &turisticos1);

            densidade1 = populacao1 / area1;

            PPC1 = (PIB1 * 1000000000.0f) / populacao1;

            superPoder1 = (float)populacao1 + area1 + PIB1 + turisticos1 + PPC1 + (1.0f / densidade1);

        printf("\n");
    
      printf("  ◻️ Carta 2️⃣\n");

        printf("\n");

    printf("Digite a letra do Estado (A - H): ");
        scanf(" %c", &estado2);

    printf("Digite o código da Carta (01 - 04): ");
        scanf("%s", codigo2);
    getchar();
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", nome2);

    printf("Digite o número de populações: ");
        scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
        scanf("%f", &area2);

    printf("Digite o PIB: ");
        scanf("%f", &PIB2);

    printf("Digite o número de pontos Turísticos: ");
        scanf("%d", &turisticos2);

            densidade2 = populacao2 / area2;
            
            PPC2 = (PIB2 * 1000000000.0f) / populacao2;

            superPoder2 = (float)populacao2 + area2 + PIB2 + turisticos2 + PPC2 + (1.0f / densidade2);


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

    printf("📍  Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("💲  PIB per Capita: R$ %.2f\n", PPC1);

    printf("⚡  Super Poder: %.2f\n", superPoder1);
        
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

    printf("📍  Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("💲  PIB per Capita: R$ %.2f\n", PPC2);

    printf("⚡  Super Poder: %.2f\n", superPoder2);

        printf("\n");

    // Comparação dos Atributos

    printf("\nComparação de Cartas: 🂱\n");

        printf("\n");

    printf("👥  População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("📏  Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("💸  PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2) ? 1 : 0);
    printf("📸  Pontos Turísticos: Carta %d venceu (%d)\n", (turisticos1 > turisticos2) ? 1 : 2, (turisticos1 > turisticos2) ? 1 : 0);
    printf("📍  Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);
    printf("💲  PIB per Capita: Carta %d venceu (%d)\n", (PPC1 > PPC2) ? 1 : 2, (PPC1 > PPC2) ? 1 : 0);
    printf("⚡  Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

        printf("\n");
    
    // COMPARAÇÃO FINAL - Usando apenas 1 atributo (PIB per capita)
    printf("============================================\n");
    printf(" Comparação de cartas (Atributo: PIB per capita)\n");
    printf("============================================\n");

    printf("\nCarta 1 - %s (%c): R$ %.2f", nome1, estado1, PPC1);
    printf("\nCarta 2 - %s (%c): R$ %.2f", nome2, estado2, PPC2);

    if (PPC1 > PPC2) {
        printf("\n\nResultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (PPC2 > PPC1) {
        printf("\n\nResultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("\n\nResultado: Empate!\n");
    }

        printf("\n");
        
    return 0;
}
