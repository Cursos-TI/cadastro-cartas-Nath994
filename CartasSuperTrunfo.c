#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado, estado2, codigoCarta[4], codigoCarta2[4], nomeCidade[20], nomeCidade2[20];
  int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int pontoTuristico, pontoTuristico2;

   // Área para entrada de dados

   //Carta 1:
  printf("Forneça as informações da carta 1:\n");
  printf("Digite a letra do estado (Uma letra entre 'A' a 'H'):\n");
  scanf(" %c", &estado);
  printf("Digite o código da carta (Letra do estado + número de 01 a 04):\n");
  scanf("%s", &codigoCarta);
  printf("Digite o nome da cidade:\n");
  scanf("%s", &nomeCidade);
  printf("Digite a população:\n");
  scanf("%d", &populacao);
  printf("Digite a área (km²) da cidade:\n");
  scanf("%f", &area);
  printf("Digite o PIB:\n");
  scanf("%f", &pib);
  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &pontoTuristico);

  //Carta 2:
  printf("Forneça as informações da carta 2:\n");
  printf("Digite a letra do estado (Uma letra entre 'A' a 'H'):\n");
  scanf(" %c", &estado2);
  printf("Digite o código da carta (Letra do estado + número de 01 a 04):\n");
  scanf("%s", &codigoCarta2);
  printf("Digite o nome da cidade:\n");
  scanf("%s", &nomeCidade2);
  printf("Digite a população:\n");
  scanf("%d", &populacao2);
  printf("Digite a área (km²) da cidade:\n");
  scanf("%f", &area2);
  printf("Digite o PIB:\n");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &pontoTuristico2);
  

  // Área para exibição dos dados da cidad
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico);

    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);




return 0;
} 
