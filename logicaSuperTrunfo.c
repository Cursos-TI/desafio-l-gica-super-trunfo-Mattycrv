#include <stdio.h>
#include <string.h>

//Carta 1
char estado1, codigoDaCarta1[10], nomeDaCidade1[50], estado2, codigoDaCarta2[10], nomeDaCidade2[50];
int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
float area1, pib1, area2, pib2;

int primeiroAtributo;

void cadastroCartas() {
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
    long double pibPerCapita1 = pib1 / (float) populacao1;
    double superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;

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

    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB PerCapita: %.2lf\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
}

void escolherComparacao() {
    printf("Escolha o primeiro atributo:\n"
            "1 - População\n"
            "2 - Área:\n"
            "3 - PIB:\n"
            "4 - Pontos Turísticos:\n"
            "5 - Densidade Populacional:\n");
    scanf("%d", &primeiroAtributo);

    float densidadePopulacional1 = (float) populacao1 / area1;
    float densidadePopulacional2 = (float) populacao2 / area2;

    switch (primeiroAtributo) {
        case 1:
            printf("Atributo comparado: População\n");
            printf("População carta 1: %i - população carta 2: %i\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("A Carta 1: %c venceu!\n", estado1);
            }
            else if (populacao2 > populacao1) {
                printf("A Carta 2: %c venceu!\n", estado2);
            }
            else if (populacao1 == populacao2) {
                printf("Empate!\n");
            }
            break;
        
        case 2:
            printf("Atributo comparado: Área\n");
            printf("Área carta 1: %f - Área carta 2: %f\n", area1, area2);
            if (area1 > area2) {
                printf("A Carta 1: %c venceu!\n", estado1);
            }
            else if (area2 > area1) {
                printf("A Carta 2: %c venceu!\n", estado2);
            }
            else if (area1 == area2) {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo comparado: PIB\n");
            printf("PIB carta 1: %f - PIB carta 2: %f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("A Carta 1: %c venceu!\n", estado1);
            }
            else if (pib2 > pib1) {
                printf("A Carta 2: %c venceu!\n", estado2);
            }
            else if (pib1 == pib2) {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo comparado: Pontos turísticos\n");
            printf("Pontos Turísticos carta 1: %i - Pontos turísticos carta 2: %i\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("A Carta 1: %c venceu!\n", estado1);
            }
            else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("A Carta 2: %c venceu!\n", estado2);
            }
            else if (pontosTuristicos1 == pontosTuristicos2) {
                printf("Empate!\n");
            }

        case 5:
            printf("Atributo comparado: Densidade populacional\n");
            printf("Densidade Populacional carta 1: %f - Densidade Populacional carta 2: %f\n", densidadePopulacional1, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("A Carta 1: %c venceu!\n", estado1);
            }
            else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("A Carta 2: %c venceu!\n", estado2);
            }
            else if (densidadePopulacional1 == densidadePopulacional2) {
                printf("Empate!\n");
            }
            break;
            
        default:
            printf("opção inválida!");
            break;
    }
    printf("Estado: %c e %c\n", estado1, estado2);
    printf("%d\n", primeiroAtributo);
}

int main() {
    printf("\n");
    cadastroCartas();

    printf("\n");
    escolherComparacao();
    
    return 0;
}
