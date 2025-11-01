#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1[30], carta1[10], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int ponturistico1;
    float densipo1, pibpercap1, superpoder1;

    // Variáveis da segunda carta
    char estado2[30], carta2[10], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int ponturistico2;
    float densipo2, pibpercap2, superpoder2;

    // Entrada de dados da primeira carta
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado1);
    printf("Digite o código da carta: \n");
    scanf("%s", carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &ponturistico1);

    // Cálculos - Carta 1
    densipo1 = (float) populacao1 / area1;
    pibpercap1 = (pib1 * 1000000000) / (float) populacao1;
    superpoder1 = (float) populacao1 + area1 + (pib1 * 1000000000) + ponturistico1 + pibpercap1 + (1.0f / densipo1);

    // Entrada de dados da segunda carta
    printf("\nAgora vamos preencher a próxima carta do jogo!\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &ponturistico2);

    // Cálculos - Carta 2
    densipo2 = (float) populacao2 / area2;
    pibpercap2 = (pib2 * 1000000000) / (float) populacao2;
    superpoder2 = (float) populacao2 + area2 + (pib2 * 1000000000) + ponturistico2 + pibpercap2 + (1.0f / densipo2);

    // Exibição das cartas
    printf("\n***** Carta 1 *****\n");
    printf("Cidade: %s\nEstado: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", cidade1, estado1, populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n", ponturistico1, densipo1, pibpercap1, superpoder1);

    printf("\n***** Carta 2 *****\n");
    printf("Cidade: %s\nEstado: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", cidade2, estado2, populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n", ponturistico2, densipo2, pibpercap2, superpoder2);

    // Comparação com dois atributos
    int atributo1, atributo2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2, soma1, soma2;

    printf("\n=== Escolha o primeiro atributo para comparar ===\n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos turísticos (maior vence)\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita (maior vence)\n");
    printf("7 - Super Poder (maior vence)\n");
    scanf("%d", &atributo1);

    // Define valores do primeiro atributo
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = ponturistico1; valor1_c2 = ponturistico2; break;
        case 5: valor1_c1 = densipo1; valor1_c2 = densipo2; break;
        case 6: valor1_c1 = pibpercap1; valor1_c2 = pibpercap2; break;
        case 7: valor1_c1 = superpoder1; valor1_c2 = superpoder2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Menu dinâmico (remove o atributo já escolhido)
    printf("\n=== Escolha o segundo atributo (diferente do primeiro) ===\n");
    for (int i = 1; i <= 7; i++) {
        if (i == atributo1) continue;
        switch (i) {
            case 1: printf("%d - População (maior vence)\n", i); break;
            case 2: printf("%d - Área (maior vence)\n", i); break;
            case 3: printf("%d - PIB (maior vence)\n", i); break;
            case 4: printf("%d - Pontos turísticos (maior vence)\n", i); break;
            case 5: printf("%d - Densidade populacional (menor vence)\n", i); break;
            case 6: printf("%d - PIB per capita (maior vence)\n", i); break;
            case 7: printf("%d - Super Poder (maior vence)\n", i); break;
        }
    }
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 7) {
        printf("Atributo inválido ou repetido!\n");
        return 0;
    }

    // Define valores do segundo atributo
    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = ponturistico1; valor2_c2 = ponturistico2; break;
        case 5: valor2_c1 = densipo1; valor2_c2 = densipo2; break;
        case 6: valor2_c1 = pibpercap1; valor2_c2 = pibpercap2; break;
        case 7: valor2_c1 = superpoder1; valor2_c2 = superpoder2; break;
    }

    // Cálculo das somas
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n=== RESULTADO DA RODADA ===\n");
    printf("%s (%.2f + %.2f = %.2f)\n", cidade1, valor1_c1, valor2_c1, soma1);
    printf("%s (%.2f + %.2f = %.2f)\n", cidade2, valor1_c2, valor2_c2, soma2);

    // Regras de vitória: densidade é exceção (menor vence)
    float pontos1 = 0, pontos2 = 0;

    pontos1 += (atributo1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    pontos2 += (atributo1 == 5) ? (valor1_c2 < valor1_c1) : (valor1_c2 > valor1_c1);
    pontos1 += (atributo2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    pontos2 += (atributo2 == 5) ? (valor2_c2 < valor2_c1) : (valor2_c2 > valor2_c1);

    if (soma1 > soma2)
        printf("\n🏆 %s venceu a rodada!\n", cidade1);
    else if (soma2 > soma1)
        printf("\n🏆 %s venceu a rodada!\n", cidade2);
    else
        printf("\n🤝 Empate!\n");

    return 0;
}
