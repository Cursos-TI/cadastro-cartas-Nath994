#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado = 'A', estado2 = 'B', codigoCarta[4] = "A01" , codigoCarta2[4] = "B02" , nomeCidade[20] = "SP", nomeCidade2[20] = "RJ";
  unsigned long int populacao = 12325000, populacao2 = 6748000;
  float area = 1521.11, area2 = 1200.25, pib = 699.28, pib2 = 300.50, densidadePop, densidadePop2, pibPercapita, pibPercapita2, superPoder, superPoder2;
  int pontoTuristico = 50, pontoTuristico2 = 30;



   // Área para entrada de dados

   /*Entrada Carta 1:
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
  */

  /*Entrada Carta 2:
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
*/

//Cálculos Carta 1
  densidadePop = (float) populacao / area;
  pibPercapita = (float) (pib * 1000000000) / populacao;
  superPoder = (float) populacao + area + (pib * 1000000000) + (float) pontoTuristico + pibPercapita + (1.0 / densidadePop);
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

    /* Área de comparação de cartas (Desafio anterior) 
    printf("Comparação de Cartas\n");
    printf("Se o resultado for (1) é Verdadeiro, se for (0) é Falso\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoTuristico > pontoTuristico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePop2 < densidadePop);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPercapita > pibPercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);
    */

    /* Tema 3 - Desafio Novato: Escolher apenas um atributo para realizar a comparação entre as duas cartas. Deve ser feito diretamente no código
    printf ("Comparação de cartas (Atributo: Populaçao):\n");
    printf ("\nCarta 1 - %s: %lu\n", nomeCidade, populacao);
    printf ("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
    
    if (populacao > populacao2){
      printf("Resultado: Carta 1 (%s) venceu!", nomeCidade);
    }else{
      printf("Carta 2 (%s) venceu!\n",nomeCidade2);
    }
    */

    //Tema 3 Desafio Aventureiro: Implementar um menu interativo

    //Menu de escolha de atributos
    printf("**** Jogo Super Trunfo ****\n\n");
    printf("Escolha o atributo que deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");


   int escolhaJogador;

   scanf(" %d", &escolhaJogador);

   switch (escolhaJogador){

    case 1: //População
      printf ("\n\nAtributo escolhido: População\n\n");
      printf ("\nCarta 1:\n");
      printf ("Nome da cidade: %s\n", nomeCidade);
      printf ("População: %lu\n", populacao);
      printf ("\nCarta 2:\n");
      printf ("Nome da cidade: %s\n", nomeCidade2);
      printf ("População: %lu\n", populacao2);

      if (populacao > populacao2){
        printf("\n*** Carta 1 venceu! ***\n");
      }else if (populacao < populacao2){
        printf("\n*** Carta 2 Venceu! ***\n");
      }else{
        printf("\n*** Empate! ***\n");
      }
    break;

    case 2: // área
      printf ("\n\nAtributo escolhido: Área\n\n");
      printf ("\nCarta 1:\n");
      printf ("Nome da cidade: %s\n", nomeCidade);
      printf ("Área: %.2f km²\n", area);
      printf ("\nCarta 2:\n");
      printf ("Nome da cidade: %s\n", nomeCidade2);
      printf ("Área: %.2f km²\n", area2);

      if (area > area2){
        printf("\n*** Carta 1 venceu! ***\n");
      }else if (area < area2){
        printf("\n*** Carta 2 Venceu! ***\n");
      }else{
        printf("\n*** Empate! ***\n");
      }
    break;

    case 3: // PIB
      printf ("\n\nAtributo escolhido: PIB\n\n");
      printf ("\nCarta 1:\n");
      printf ("Nome da cidade: %s\n", nomeCidade);
      printf ("PIB: %.2f bilhões de reais\n", pib);
      printf ("\nCarta 2:\n");
      printf ("Nome da cidade: %s\n", nomeCidade2);
      printf ("PIB: %.2f bilhões de reais\n", pib2);

      if (pib > pib2){
        printf("\n*** Carta 1 venceu! ***\n");
      }else if (pib < pib2){
        printf("\n*** Carta 2 Venceu! ***\n");
      }else{
        printf("\n*** Empate! ***\n");
      }
    break;

    case 4: // Número de pontos turísticos
      printf ("\n\nAtributo escolhido: Número de pontos turísticos\n\n");
      printf ("\nCarta 1:\n");
      printf ("Nome da cidade: %s\n", nomeCidade);
      printf ("Pontos Turísticos: %d\n", pontoTuristico);
      printf ("\nCarta 2:\n");
      printf ("Nome da cidade: %s\n", nomeCidade2);
      printf ("Pontos Turísticos: %d\n", pontoTuristico2);

      if (pontoTuristico > pontoTuristico2){
        printf("\n*** Carta 1 venceu! ***\n");
      }else if (pontoTuristico < pontoTuristico2){
        printf("\n*** Carta 2 Venceu! ***\n");
      }else{
        printf("\n*** Empate! ***\n");
      }
    break;

    case 5: // Densidade demográfica
      printf ("\n\nAtributo escolhido: Densidade Demográfica\n\n");
      printf ("\nCarta 1:\n");
      printf ("Nome da cidade: %s\n", nomeCidade);
      printf("Densidade Populacional: %.2f hab/km2\n", densidadePop);
      printf ("\nCarta 2:\n");
      printf ("Nome da cidade: %s\n", nomeCidade2);
      printf("Densidade Populacional: %.2f hab/km2\n", densidadePop2);

      if (densidadePop > densidadePop2){
        printf("\n*** Carta 1 venceu! ***\n");
      }else if (densidadePop < densidadePop2){
        printf("\n*** Carta 2 Venceu! ***\n");
      }else{
        printf("\n*** Empate! ***\n");
      }
    break;
   }
   
   

return 0;

} 
