#include <stdio.h>
#include <string.h> // para strcspn()

int main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int Turistico1, Turistico2;
    float area1, area2, PIB1, PIB2;
    float Densidade1, Densidade2;
    float PIBPC1, PIBPC2;

    // ----- DADOS DA CARTA 1 -----
    printf("DADOS DA CARTA 1\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("digite sua cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Turistico1);

    // ----- DADOS DA CARTA 2 -----
    printf("DADOS DA CARTA 2\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("digite sua cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Turistico2);

    // ----- CALCULOS -----
    Densidade1 = populacao1 / area1;
    PIBPC1 = PIB1 / populacao1;

    Densidade2 = populacao2 / area2;
    PIBPC2 = PIB2 / populacao2;

    // ----- RESULTADOS -----
    printf("\n--- RESULTADO DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", Turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per capita: %.2f\n", PIBPC1);

    printf("\n--- RESULTADO DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", Turistico2);
    printf("Densidade Populacional: %.2f \n", Densidade2);
    printf("PIB per capita: %.2f\n", PIBPC2);

    return 0;
}
