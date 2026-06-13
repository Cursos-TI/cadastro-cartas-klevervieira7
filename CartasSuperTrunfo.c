#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[4];
  char cidade[20];
  int populacao;
  float area;
  float pib;
  int pontos;
  float densidade;
  float pibPerCapita;

  // Área para entrada de dados

  printf("Escolha o estado da carta de (A ate H)!\n");
  scanf("%c", &estado);

  printf("Escolha o codigo da carta (Ex.: A01)!\n");
  scanf("%s", codigo);

  printf("Escolha a cidade da carta!\n");
  scanf("%s", cidade);

  printf("Qual a populacao da cidade?\n");
  scanf("%d", &populacao);

  printf("Area em metros quadrados?\n");
  scanf("%f", &area);

  printf("PIB da cidade!\n");
  scanf("%f", &pib);

  printf("Quantos pontos turisticos existem nessa cidade?\n");
  scanf("%d", &pontos);
  
  densidade = (float) populacao / area;
  pibPerCapita = (float) pib / populacao;

  // Área para exibição dos dados da cidade
  printf("\n--- RESULTADO DA CARTA ---\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area M²: %.1fM²\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Pontos turisticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita);
return 0;
} 
