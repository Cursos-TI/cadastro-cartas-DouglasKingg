#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//variaveis da primeira carta

char estado1 [30];
char carta1 [10];
char cidade1 [50];
int populacao1;
float area1;
float pib1;
int ponturistico1;
float densipo1;
float pibpercap1;

//variaveis da segunda carta

char estado2 [30];
char carta2 [10];
char cidade2 [50];
int populacao2;
float area2;
float pib2;
int ponturistico2;
float densipo2;
float pibpercap2;
  // Área para entrada de dados
  //incio do code da primeira carta

printf("Digite o nome do Estado: \n");
scanf("%s", estado1);

printf("Digite o código da carta: \n");
scanf("%s", carta1);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao1);

printf("Digite a area da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &ponturistico1);


  densipo1 = (float) populacao1 / area1;
  pibpercap1 = (pib1 * 1000000000) / (float) populacao1; //pib está em bilhões, então multiplica por 1 bilhão


//incio do code da segunda carta

printf("Agora vamos preencher a proxima carta do jogo!\n");

printf("Digite o nome do Estado: \n");
scanf("%s", estado2);

printf("Digite o código da carta: \n");
scanf("%s", carta2);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade2);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao2);

printf("Digite a area da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &ponturistico2);

densipo2 = (float) populacao2 / area2;
pibpercap2 = (pib2 * 1000000000) / (float) populacao2; //pib está em bilhões, então multiplica por 1 bilhão

  // Área para exibição dos dados da cidade

  //Carta A01

printf("*****Carta A01*****\n");
printf("Estado: %s \n", estado1);
printf("Codigo da Carta: %s \n", carta1);
printf("Nome da cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %.2f km² \n", area1);
printf("PIB: %.2f Bilhões de reais \n", pib1);
printf("Número de pontos turisticos: %d \n", ponturistico1);
printf("Densidade populacional: %.2f \n", densipo1);
printf("PIB per capita: %.2f \n", pibpercap1);
//carta A02
printf("*****Carta A02*****\n");
printf("Estado: %s \n", estado2);
printf("Codigo da Carta: %s \n", carta2);
printf("Nome da cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %.2f km² \n", area2);
printf("PIB: %.2f Bilhões de reais \n", pib2);
printf("Número de pontos turisticos: %d \n", ponturistico2);
printf("Densidade populacional: %.2f \n", densipo2);
printf("PIB per capita: %.2f \n", pibpercap2);

return 0;
} 
