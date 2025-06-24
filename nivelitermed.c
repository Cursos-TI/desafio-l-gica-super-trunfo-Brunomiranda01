#include <stdio.h>
#include <string.h>

int main() {
    int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
    float area1, area2, PIB1, PIB2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PibperCapita1, PibperCapita2;
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int escolha;

    // === Cadastro da Carta 1 ===
    printf("Carta 1!\n");

    printf("Informe um Estado de A a H: ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &Populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / area1;
    PibperCapita1 = (float) PIB1 / Populacao1;

    // === Cadastro da Carta 2 ===
    printf("\nCarta 2!\n");

    printf("Informe um Estado de A a H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &Populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (float) Populacao2 / area2;
    PibperCapita2 = (float) PIB2 / Populacao2;

    // === Menu de Comparação ===
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\nComparando %s (Carta 1) vs %s (Carta 2)\n", cidade1, cidade2);

    switch (escolha) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", cidade1, Populacao1);
            printf("%s: %d\n", cidade2, Populacao2);
            if (Populacao1 > Populacao2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (Populacao2 > Populacao1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, PIB1);
            printf("%s: %.2f bilhões\n", cidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (PIB2 > PIB1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, PontosTuristicos1);
            printf("%s: %d\n", cidade2, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (PontosTuristicos2 > PontosTuristicos1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Populacional:\n");
            printf("%s: %.2f hab/km²\n", cidade1, DensidadePopulacional1);
            printf("%s: %.2f hab/km²\n", cidade2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (DensidadePopulacional2 < DensidadePopulacional1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("PIB per Capita:\n");
            printf("%s: %.6f\n", cidade1, PibperCapita1);
            printf("%s: %.6f\n", cidade2, PibperCapita2);
            if (PibperCapita1 > PibperCapita2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (PibperCapita2 > PibperCapita1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 6.\n");
    }

    return 0;
}