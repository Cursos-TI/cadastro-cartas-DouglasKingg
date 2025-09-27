#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//variaveis da primeira carta

char estado1[30], carta1[10], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int ponturistico1;
    float densipo1, pibpercap1, superpoder1;

//variaveis da segunda carta

char estado2[30], carta2[10], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int ponturistico2;
    float densipo2, pibpercap2, superpoder2;
  // Área para entrada de dados
  //incio do code da primeira carta

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


//incio do code da segunda carta

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
    superpoder2 = (float) populacao2 + area2 + (pib2 * 1000000000) + ponturistico2 + pibpercap2 + (1.0f / densipo2);/*
    Precisei pesquisar sobre o 1.0f
    testei bastante em outra aba de código, enfim deu certo :)*/

  // Área para exibição dos dados da cidade

  // Exibição dos dados - Carta 1
    printf("\n***** Carta A01 *****\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponturistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densipo1);
    printf("PIB per capita: %.2f reais\n", pibpercap1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Exibição dos dados - Carta 2
    printf("\n***** Carta A02 *****\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponturistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densipo2);
    printf("PIB per capita: %.2f reais\n", pibpercap2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\n\n*** Comparação de Cartas ***\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ponturistico1 > ponturistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densipo1 < densipo2);  // menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercap1 > pibpercap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}