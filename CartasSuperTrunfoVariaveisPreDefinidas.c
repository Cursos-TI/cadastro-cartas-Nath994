#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado = 'A', estado2 = 'B', codigoCarta[4] = "A01", codigoCarta2[4] = "B02", nomeCidade[20] = "SP", nomeCidade2[20] = "RJ";
  unsigned long int populacao = 12325000, populacao2 = 12325000; // 6748000;
  float area = 1521.00, area2 = 1521.11 /*1200.25*/, pib = 699.28, pib2 = 300.50, densidadePop, densidadePop2, pibPercapita, pibPercapita2, superPoder, superPoder2;
  int pontoTuristico = 50, pontoTuristico2 = 50; // 30;

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

  // Cálculos Carta 1
  densidadePop = (float)populacao / area;
  pibPercapita = (float)(pib * 1000000000) / populacao;
  superPoder = (float)populacao + area + (pib * 1000000000) + (float)pontoTuristico + pibPercapita + (1.0 / densidadePop);
  // Cálculos Carta 2
  densidadePop2 = (float)populacao2 / area2;
  pibPercapita2 = (float)(pib2 * 1000000000) / populacao2;
  superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontoTuristico2 + pibPercapita2 + (1.0 / densidadePop2);

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

  //--------------------------------------------------------------------------------------------------------------------------

  // Tema 3 Desafio Mestre :

  // Area de escolha de atributos

  int escolhaJogador1 = 0, escolhaJogador2 = 0;
  double resultado1 = 0, resultado2 = 0;

  // ### Requisito funcional 1. Escolha de dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos: ###

  // Menu do primeiro atributo

  printf("**** Jogo Super Trunfo ****\n\n");
  printf("Escolha o primeiro atributo que deseja comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade Populacional\n");
  scanf(" %d", &escolhaJogador1);

  // Menu do segundo atributo

  if ((escolhaJogador1 < 1) || (escolhaJogador1 > 5))
  {
    printf("Escolha inválida. Atributo um deve ser uma das opções listadas.\n");
  }
  else
  {
    printf("Escolha o segundo atributo que deseja comparar:\n");

    if (escolhaJogador1 != 1)
    {
      printf("1. População\n");
    }
    if (escolhaJogador1 != 2)
    {
      printf("2. Área\n");
    }
    if (escolhaJogador1 != 3)
    {
      printf("3. PIB\n");
    }
    if (escolhaJogador1 != 4)
    {
      printf("4. Número de pontos turísticos\n");
    }
    if (escolhaJogador1 != 5)
    {
      printf("5. Densidade Populacional\n");
    }

    scanf("%d", &escolhaJogador2);

    // Área para evitar preenchimento errado

    if (escolhaJogador1 == escolhaJogador2)
    {
      printf("Escolha inválida. Você escolheu o mesmo atributo!");
    }
    else if ((escolhaJogador2 < 1) || (escolhaJogador2 > 5))
    {
      printf("Escolha inválida. Você precisa escolher uma das opções listadas\n");
    }
    else
    {

      // Área do Switch

      switch (escolhaJogador1)
      {
      case 1:
        printf("\n\n____________________________________\nPrimeiro Atributo escolhido: População\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("População: %lu\n", populacao);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("População: %lu\n", populacao2);

        // ### Requisito funcional 2. Comparação individiual dos atributos selecionados ###
        if (populacao == populacao2)
        {
          printf("\n *** Empate no atributo 1! *** \n");
        }
        else if (populacao > populacao2)
        {
          printf("\n *** Carta 1 venceu o atributo 1! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 1! *** \n");
        }

        resultado1 = (double)populacao;
        resultado2 = (double)populacao2;

        break;

      case 2:
        printf("\n\n____________________________________\nPrimeiro Atributo escolhido: Área\n__________________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Área: %.2f km²\n", area);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Área: %.2f km²\n", area2);

        // ### Requisito funcional 2. Comparação individiual dos atributos selecionados ###
        if (area == area2)
        {
          printf("\n *** Empate no atributo 1! *** \n");
        }
        else if (area > area2)
        {
          printf("\n *** Carta 1 venceu o atributo 1! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 1! *** \n");
        }

        resultado1 = (double)area;
        resultado2 = (double)area2;

        break;

      case 3:
        printf("\n\n____________________________________\nPrimeiro Atributo escolhido: PIB\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("PIB: %.2f bilhões de reais\n", pib2);

        // ### Requisito funcional 2. Comparação individiual dos atributos selecionados ###
        if (pib == pib2)
        {
          printf("\n *** Empate no atributo 1! *** \n");
        }
        else if (pib > pib2)
        {
          printf("\n *** Carta 1 venceu o atributo 1! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 1! *** \n");
        }

        resultado1 = (double)pib;
        resultado2 = (double)pib2;

        break;

      case 4:
        printf("\n\n____________________________________\nPrimeiro Atributo escolhido: Número de pontos turísticos\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Pontos Turísticos: %d\n", pontoTuristico);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Pontos Turísticos: %d\n", pontoTuristico2);

        // ### Requisito funcional 2. Comparação individiual dos atributos selecionados ###
        if (pontoTuristico == pontoTuristico2)
        {
          printf("\n *** Empate no atributo 1! *** \n");
        }
        else if (pontoTuristico > pontoTuristico2)
        {
          printf("\n *** Carta 1 venceu o atributo 1! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 1! *** \n");
        }

        resultado1 = (double)pontoTuristico;
        resultado2 = (double)pontoTuristico2;

        break;

      case 5:
        printf("\n\n____________________________________\nPrimeiro Atributo escolhido: Densidade Demográfica\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Densidade Populacional: %.2f hab/km2\n", densidadePop);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Densidade Populacional: %.2f hab/km2\n", densidadePop2);

        // ### Requisito funcional 2. Comparação individiual dos atributos selecionados ###
        if (densidadePop == densidadePop2)
        {
          printf("\n *** Empate no atributo 1! *** \n");
        }
        else if (densidadePop < densidadePop2)
        {
          printf("\n *** Carta 1 venceu o atributo 1! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 1! *** \n");
        }

        resultado1 = 1.0 / (double)densidadePop;
        resultado2 = 1.0 / (double)densidadePop2;

        break;

      default:
      }

      switch (escolhaJogador2)
      {
      case 1:
        printf("\n\n____________________________________\nSegundo Atributo escolhido: População\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("População: %lu\n", populacao);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("População: %lu\n", populacao2);

        // ### Requisito funcional 2. Comparação individiual dos atributos selecionados ###
        if (populacao == populacao2)
        {
          printf("\n *** Empate no atributo 2! *** \n");
        }
        else if (populacao > populacao2)
        {
          printf("\n *** Carta 1 venceu o atributo 2! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 2! *** \n");
        }

        // Requisito funcional 3. Somar os valores dos atributos para cada carta.

        resultado1 += (double)populacao;
        resultado2 += (double)populacao2;

        break;

      case 2:
        printf("\n\n____________________________________\nSegundo Atributo escolhido: Área\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Área: %.2f km²\n", area);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Área: %.2f km²\n", area2);

        if (area == area2)
        {
          printf("\n *** Empate no atributo 2! *** \n");
        }
        else if (area > area2)
        {
          printf("\n *** Carta 1 venceu o atributo 2! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 2! *** \n");
        }

        // Requisito funcional 3. Somar os valores dos atributos para cada carta.

        resultado1 += (double)area;
        resultado2 += (double)area2;

        break;

      case 3:
        printf("\n\n____________________________________\nSegundo Atributo escolhido: PIB\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("PIB: %.2f bilhões de reais\n", pib2);

        if (pib == pib2)
        {
          printf("\n *** Empate no atributo 2! *** \n");
        }
        else if (pib > pib2)
        {
          printf("\n *** Carta 1 venceu o atributo 2! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 2! *** \n");
        }

        // Requisito funcional 3. Somar os valores dos atributos para cada carta.

        resultado1 += (double)pib;
        resultado2 += (double)pib2;

        break;

      case 4:
        printf("\n\n____________________________________\nSegundo Atributo escolhido: Número de pontos turísticos\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Pontos Turísticos: %d\n", pontoTuristico);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Pontos Turísticos: %d\n", pontoTuristico2);

        if (pontoTuristico == pontoTuristico2)
        {
          printf("\n *** Empate no atributo 2! *** \n");
        }
        else if (pontoTuristico > pontoTuristico2)
        {
          printf("\n *** Carta 1 venceu o atributo 2! *** \n");
        }
        else
        {
          printf(" *** Carta 2 venceu o atributo 2! *** \n");
        }

        // Requisito funcional 3. Somar os valores dos atributos para cada carta.

        resultado1 += (double)pontoTuristico;
        resultado2 += (double)pontoTuristico2;

        break;

      case 5:
        printf("\n\n____________________________________\nSegundo Atributo escolhido: Densidade Demográfica\n____________________________________\n\n");
        printf("\nCarta 1:\n");
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Densidade Populacional: %.2f hab/km2\n", densidadePop);
        printf("\nCarta 2:\n");
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Densidade Populacional: %.2f hab/km2\n", densidadePop2);

        if (densidadePop == densidadePop2)
        {
          printf("\n *** Empate no atributo 2! *** \n");
        }
        else if (densidadePop < densidadePop2)
        {
          printf("\n *** Carta 1 venceu o atributo 2! *** \n");
        }
        else
        {
          printf("\n *** Carta 2 venceu o atributo 2! *** \n");
        }

        // Requisito funcional 3. Somar os valores dos atributos para cada carta.

        resultado1 += 1.0 / (double)densidadePop;
        resultado2 += 1.0 / (double)densidadePop2;

        break;

      default:
      }

      // Requisito funcional 3. Somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".

      printf("\n\n____________________________________\n\nResultado\n\n____________________________________\n\n");
      printf("A soma dos atributos da Carta 1 é %.2f\nA soma dos atributos da Carta 2 é %.2f\n", resultado1, resultado2);

      if (resultado1 == resultado2)
      {
        printf("\n### Empate! ###\n");
      }
      else if (resultado1 > resultado2)
      {
        printf("\n ### Carta 1 Ganhou! ###\n");
      }
      else
      {
        printf("\n ### Carta 2 Ganhou! ###\n");
      }
    }
  }

  return 0;
}
