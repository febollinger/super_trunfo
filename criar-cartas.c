#include <stdio.h>
#include <string.h>

int main()
{
    // CARTA 1
    char estado1[20];
    char codigoCarta1[4];
    char nomeDaCidade1[30];
    int numeroPontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPercapta1, superPoder1, inversoDensidadePopulacional1;

    printf("Digite o estado da carta 1 de A a H: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

    printf("População: \n");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o número do PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos1);

    // CALCULANDO DENSIDADE DEMOGRAFICA E PIB PER CAPITA DA CARTA 1

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPercapta1 = pib1 / (float)populacao1;

    // ADICIONANDO SUPER PODER DA CARTA 1

    inversoDensidadePopulacional1 = area1 / (float)populacao1;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroPontosTuristicos1 + pibPercapta1 + inversoDensidadePopulacional1;

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", nomeDaCidade1);
    printf("População: %ld \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f bilhóes de reais \n", pib1);
    printf("Número de pontos turisticos: %d \n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPercapta1);

    // CARTA 2

    char estado2[20];
    char codigoCarta2[4];
    char nomeDaCidade2[30];
    int numeroPontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPercapta2, inversoDensidadePopulacional2, superPoder2;

    printf("Digite o estado da carta 2 de A a H: \n");
    scanf(" %s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);

    printf("População: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o número do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos2);

    // CALCULANDO DENSIDADE DEMOGRAFICA E PIB PER CAPITA DA CARTA 2

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPercapta2 = pib2 / (float)populacao2;

    // ADICIONANDO SUPER PODER DA CARTA 2

    inversoDensidadePopulacional2 = area2 / (float)populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroPontosTuristicos2 + pibPercapta2 + inversoDensidadePopulacional2;

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("População: %ld \n", populacao2);
    printf("Area: %f km² \n", area2);
    printf("PIB: %f bilhóes de reais \n", pib2);
    printf("Número de pontos turisticos: %d \n", numeroPontosTuristicos2);
    printf("Densidade populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPercapta2);

    // MENU INTERATIVO

    int atributoEscolhido;

    printf("Escolha uma opção para a comparação entre as cartas: \n");
    printf("1. Comparar a populaçao.\n");
    printf("2. Comparar a área. \n");
    printf("3. Comparar o PIB. \n");
    printf("4. Comparar o número de pontos turísticos. \n");
    printf("5. Comparar a densidade demográfica. \n");
    printf("6. Comparar todos os atributos \n");
    scanf("%d", &atributoEscolhido);

    switch (atributoEscolhido)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Carta 1 é a vencedora com a população de %ld, enquanto a carta 2 possui apenas %ld. \n", populacao1, populacao2);
        }
        else if (populacao2 > populacao1)
        {
            printf("Carta 2 é a vencedora com a população de %ld, enquanto a carta 2 possui apenas %ld. \n", populacao2, populacao1);
        }
        else
        {
            printf("Empate! Número populacional igual. \n");
        }
        break;
    case 2:
        if (area1 > area2)
        {
            printf("Carta 1 é a vencedora, com a área de %.2f enquanto a carta 2 possui uma área de %.2f. \n", area1, area2);
        }
        else if (area2 > area1)
        {
            printf("Carta 2 é a vencedora, com a área de %.2f enquanto a carta 1 possui uma área de %.2f. \n", area2, area1);
        }
        else
        {
            printf("Empate! ambas possuem a mesma área. \n");
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            printf("Carta 1 é a vencedora, com o PIB de %.2f enquanto a carta 2 possui o PIB de %.2f. \n", pib1, pib2);
        }
        else if (pib2 > pib1)
        {
            printf("Carta 2 é a vencedora, com o PIB de %.2f enquanto a carta 1 possui um PIB de %.2f. \n", pib2, pib1);
        }
        else
        {
            printf("Empate! ambas possuem o mesmo PIB. \n");
        }
        break;
    case 4:
        if (numeroPontosTuristicos1 > numeroPontosTuristicos2)
        {
            printf("Carta 1 é a vencedora, com %d pontos turisticos enquanto a carta 2 possui %d. \n", numeroPontosTuristicos1, numeroPontosTuristicos2);
        }
        else if (numeroPontosTuristicos2 > numeroPontosTuristicos1)
        {
            printf("Carta 2 é a vencedora, com %d pontos turisticos enquanto a carta 1 possui %d. \n", numeroPontosTuristicos2, numeroPontosTuristicos1);
        }
        else
        {
            printf("Empate! ambas possuem a mesma quantidade de pontos turísticos.");
        }
        break;
    case 5:
        if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("Carta 2 é a vencedora ! Com a densidade demográfica de %.2f inferior a da carta 1 que é %.2f. \n", densidadePopulacional2, densidadePopulacional1);
        }
        else if (densidadePopulacional2 > densidadePopulacional1)
        {
            printf("Carta 1 é a vencedora ! Com a densidade demográfica de %.2f inferior a da carta 1 que é %.2f. \n", densidadePopulacional1, densidadePopulacional2);
        }
        else
        {
            printf("Empate! Ambas possuem a mesma densidade demografica \n");
        }
        break;
    case 6:
        printf("Comparação de Cartas: \n");
        if (populacao1 > populacao2)
        {
            printf("População: Carta 1 venceu (1) \n");
        }
        else if (populacao2 > populacao1)
        {
            printf("População: Carta 2 venceu (0) \n");
        }
        else
        {
            printf("População: Empate! \n");
        }
        if (area1 > area2)
        {
            printf("Área: Carta 1 venceu (1) \n");
        }
        else if (area2 > area1)
        {
            printf("Área: Carta 2 venceu (0) \n");
        }
        else
        {
            printf("Área: Empate! \n");
        }
        if (pib1 > pib2)
        {
            printf("PIB: Carta 1 venceu (1) \n");
        }
        else if (pib2 > pib1)
        {
            printf("PIB: Carta 2 venceu (0) \n");
        }
        else
        {
            printf("PIB: Empate! \n");
        }
        if (numeroPontosTuristicos1 > numeroPontosTuristicos2)
        {
            printf("Pontos Turísticos: Carta 1 venceu (1) \n");
            ;
        }
        else if (numeroPontosTuristicos2 > numeroPontosTuristicos1)
        {
            printf("Pontos Turísticos: Carta 2 venceu (0) \n");
        }
        else
        {
            printf("Pontos Turísticos:Empate! \n");
        }
        if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("Densidade Populacional: Carta 2 venceu (0) \n");
        }
        else if (densidadePopulacional2 > densidadePopulacional1)
        {
            printf("Densidade Populacional: Carta 1 venceu (1) \n");
        }
        else
        {
            printf("Densidade Populacional: Empate! \n");
        }
        if (pibPercapta1 > pibPercapta2)
        {
            printf("PIB per Capita: Carta 1 venceu (1) \n");
        }
        else if (pibPercapta2 > pibPercapta1)
        {
            printf("PIB per Capita: Carta 2 venceu (0) \n");
        }
        else
        {
            printf("PIB per Capita: Empate ! \n");
        }
        if (superPoder1 > superPoder2)
        {
            printf("Super Poder: Carta 1 venceu (1) \n");
        }
        else if (superPoder2 > superPoder1)
        {
            printf("Super Poder: Carta 2 venceu (0) \n");
        }
        else
        {
            printf("Super Poder: Empate ! \n");
        }

        break;
    default:
        printf("Valor invalido! Digite uma das opções. \n");
        break;
    }

    return 0;
}