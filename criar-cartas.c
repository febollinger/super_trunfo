#include <stdio.h>
#include <string.h>

int main()
{
    // CARTA 1
    char estado1[20];
    char codigoCarta1[4];
    char nomeDaCidade1[30];
    int populacao1, numeroPontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPercapta1;

    printf("Digite o estado da carta 1 de A a H: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o número do PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos1);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPercapta1 = pib1 / (float)populacao1;

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", nomeDaCidade1);
    printf("População: %d \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f bilhóes de reais \n", pib1);
    printf("Número de pontos turisticos: %d \n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPercapta1);

    // CARTA 2

    char estado2[20];
    char codigoCarta2[4];
    char nomeDaCidade2[30];
    int populacao2, numeroPontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPercapta2;

    printf("Digite o estado da carta 2 de A a H: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o número do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPercapta2 = pib2 / (float)populacao2;

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("População: %d \n", populacao2);
    printf("Area: %f km² \n", area2);
    printf("PIB: %f bilhóes de reais \n", pib2);
    printf("Número de pontos turisticos: %d \n", numeroPontosTuristicos2);
    printf("Densidade populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPercapta2);

    return 0;
}