#include <stdio.h>

// Programa Super Trunfo - Comparação de Cidades
int main() {
    // Declaração das variáveis da Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Declaração das variáveis da Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a sigla do Estado (ex: SP):\n");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos indicadores da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a sigla do Estado (ex: RJ):\n");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos indicadores da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade1, estado1);
    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\n", codigo1, populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", pontosTuristicos1, densidade1, pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade2, estado2);
    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\n", codigo2, populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", pontosTuristicos2, densidade2, pibPerCapita2);

    // --- Comparação ---
    printf("\n=== Comparação de Cartas (Atributo: PIB per capita) ===\n");

    printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
