#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado, estado2, codigoCarta[4], codigoCarta2[4], nomeCidade[20], nomeCidade2[20];
  unsigned long int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int pontoTuristico, pontoTuristico2;
  float densidadePop, densidadePop2;
  float pibPercapita, pibPercapita2;
  float superPoder, superPoder2;

   // Área para entrada de dados

   //Entrada Carta 1:
  printf("Forneça as informações da carta 1:\n");
  printf("Digite a letra do estado (Uma letra entre 'A' a 'H'):\n");
  scanf(" %c", &estado);
  printf("Digite o código da carta (Letra do estado + número de 01 a 04):\n");
  scanf("%s", codigoCarta);
  printf("Digite o nome da cidade:\n");
  scanf("%s", nomeCidade);
  printf("Digite a população:\n");
  scanf("%lu", &populacao);
  printf("Digite a área (km²) da cidade:\n");
  scanf("%f", &area);
  printf("Digite o PIB:\n");
  scanf("%f", &pib);
  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &pontoTuristico);

  //Cálculos Carta 1
  densidadePop = (float) populacao / area;
  pibPercapita = (float) (pib * 1000000000) / populacao;
  superPoder = (float) populacao + area + (pib * 1000000000) + (float) pontoTuristico + pibPercapita + (1.0 / densidadePop);



  //Entrada Carta 2:
  printf("Forneça as informações da carta 2:\n");
  printf("Digite a letra do estado (Uma letra entre 'A' a 'H'):\n");
  scanf(" %c", &estado2);
  printf("Digite o código da carta (Letra do estado + número de 01 a 04):\n");
  scanf("%s", codigoCarta2);
  printf("Digite o nome da cidade:\n");
  scanf("%s", nomeCidade2);
  printf("Digite a população:\n");
  scanf("%lu", &populacao2);
  printf("Digite a área (km²) da cidade:\n");
  scanf("%f", &area2);
  printf("Digite o PIB:\n");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &pontoTuristico2);

  //Cálculos Carta 2
  densidadePop2 = (float) populacao2 / area2;
  pibPercapita2 = (float) (pib2 * 1000000000) / populacao2;
  superPoder2 = (float) populacao2 + area2 + (pib2 * 1000000000) + (float) pontoTuristico2 + pibPercapita2 + (1.0 / densidadePop2);

  

  // Área para exibição dos dados da cidade
  // Carta 1
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePop);
    printf("PIB per Capita: %.2f reais\n", pibPercapita);
    printf("super Poder: %.2f\n", superPoder);

  // Carta 2
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPercapita2);
    printf("super Poder: %.2f\n\n", superPoder2);

    //Área de comparaçào de cartas
    printf("Comparação de Cartas\n");
    printf("Se o resultado for (1) é Verdadeiro, se for (0) é Falso\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoTuristico > pontoTuristico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePop2 < densidadePop);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPercapita > pibPercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);


return 0;
} 
