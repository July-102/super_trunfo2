#include <stdio.h>

int main() {
    // ===== Carta 1 =====
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    double area1, pib1;  
    double densidade1, pibPerCapita1; 

    // ===== Carta 2 =====
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    double area2, pib2;
    double densidade2, pibPerCapita2;

    // --- Entrada de dados da Carta 1 ---
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%lf", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Calculos da Carta 1 ---
    densidade1 = (double) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // --- Entrada de dados da Carta 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%lf", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Calculos da Carta 2 ---
    densidade2 = (double) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- Exibicao ---
    printf("\n--- Resultado ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);

    return 0;
}