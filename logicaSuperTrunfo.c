#include <stdio.h>
#include <string.h>

//Carta 1
char estado1;
char codigoDaCarta1[10];
char nomeDaCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

//Carta 2
char estado2;
char codigoDaCarta2[10];
char nomeDaCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

void comparacao() {
    if (populacao1 > populacao2) {
        printf("A Carta 1: %c venceu!\n", estado1);
    }
    else if (populacao2 > populacao1) {
        printf("A Carta 2: %c venceu!\n", estado2);
    }
    else if (populacao1 == populacao2) {
        printf("Empate!\n");
    }
}

int main() {
    printf("----- Carta 1 -----\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    getchar();

    printf("Código da carta: ");
    fgets(codigoDaCarta1, 10, stdin);
    codigoDaCarta1[strcspn(codigoDaCarta1, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(nomeDaCidade1, 50, stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%i", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontosTuristicos1);
    getchar();

    float densidadePopulacional1 = (float) populacao1 / area1;
    long double pibPerCapita1 = pib1 /(float) populacao1;
    double superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;

    printf("---------------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %i\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB PerCapita: %.2lf\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("----- Carta 2 -----\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Código da carta: ");
    fgets(codigoDaCarta2, 10, stdin);
    codigoDaCarta2[strcspn(codigoDaCarta2, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(nomeDaCidade2, 50, stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontosTuristicos2);

    float densidadePopulacional2 = (float) populacao2 / area2;
    long double pibPerCapita2 = pib2 / (float) populacao2;
    double superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;

    printf("---------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %i\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB PerCapita: %.2lf\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("----- Comparação -----\n");
    int populacaoComparacao = populacao1 > populacao2;
    int areaComparacao = area1 > area2;
    int pibComparacao = pib1 > pib2;
    int pontosTuristicosComparacao = pontosTuristicos1 > pontosTuristicos2;
    int densidadePopulacionalComparacao = densidadePopulacional1 > densidadePopulacional2;
    int pibPerCapitaComparacao = pibPerCapita1 > pibPerCapita2;
    int superPoderComparacao = superPoder1 > superPoder2;

    printf("População: %i\n", populacaoComparacao);
    printf("Área: %i\n", areaComparacao);
    printf("PIB: %i\n", pibComparacao);
    printf("Pontos turísticos: %i\n", pontosTuristicosComparacao);
    printf("Densidade Populacional: %i\n", densidadePopulacionalComparacao);
    printf("PIB PerCapita: %i\n", pibPerCapitaComparacao);
    printf("Super Poder: %i\n", superPoderComparacao);

    printf("\n");
    comparacao();
    
    return 0;
}
