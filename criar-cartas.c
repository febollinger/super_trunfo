#include <stdio.h>

int main()
{
    char estado;
    char codigoCarta[3], nomeDaCidade[30];
    int populacao, numeroPontosTuristicos;
    float area, pib;

    printf("Digite o estado da carta: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("Digite a área da cidade: \n");
    scanf("%f", area);

    printf("Digite o número do PIB: \n");
    scanf("%f", &pib);
}