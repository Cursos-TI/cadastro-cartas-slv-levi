#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    //Carta 01:
    // variáveis:
    int carta1;
    char estado1;
    char codigo1[4];
    char cidade1[20];
    unsigned int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;
    float pibpercapto1;
    float densidadeDemografica1;
    float superPoder1;

    // Entrada de dados:
    printf("\n === Cadastre sua carta de super trunfo 01 ===\n");

    printf("Estado (A-H):\n");
    scanf(" %c", &estado1);

    //Gerar o codigo automaticamente:
    sprintf(codigo1, "%c%02d", toupper(estado1), 1);

    getchar();
    printf("Nome da Cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Qual a população da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Qual a área da Cidade: \n");
    scanf("%lf", &area1);

    printf("Qual o PIB da Cidade: \n");
    scanf("%lf", &pib1);

    printf("Quantos pontos turisticos tem a Cidade: \n");
    scanf("%d", &pontosTuristicos1);

    pib1 = pib1*1e9;
    pibpercapto1 = (float) pib1/populacao1;
    densidadeDemografica1 = (float) populacao1/area1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapto1 + (1 / densidadeDemografica1);

    //Carta 02:
    //Variaveis:
    int carta2;
    char estado2;
    char codigo2[4];
    char cidade2[20];
    unsigned int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;
    float pibpercapto2;
    float densidadeDemografica2;
    float superPoder2;

    // Entrada de dados:
    printf("\n === Cadastre sua carta de super trunfo 02 ===\n");

    printf("Estado (A-H):\n");
    scanf(" %c", &estado2);

    //Gerar o codigo automaticamente:
    sprintf(codigo2, "%c%02d", toupper(estado2), 2);

    getchar();
    printf("Nome da Cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Qual a população da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Qual a área da Cidade: \n");
    scanf("%lf", &area2);

    printf("Qual o PIB da Cidade: \n");
    scanf("%lf", &pib2);

    printf("Quantos pontos turisticos tem a Cidade: \n");
    scanf("%d", &pontosTuristicos2);

    pib2 = pib2*1e9;
    pibpercapto2 = (float) pib2/populacao2;
    densidadeDemografica2 = (float) populacao2/area2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapto2 + (1 / densidadeDemografica2);

    //Cartas Cadastrados:
    //Carta 01:
    printf("\n === %s ===\n", codigo1); //achei que daria charme a carta se o codigo estivesse em destaque
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3lf Km²\n",area1);
    printf("PIB: %.1lf bilhões de reais(R$)\n", pib1 / 1e9);
    printf("Numero de pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O PIB per capita de %s é: %.2f mil R$ por habitante\n", cidade1, pibpercapto1 /1000);
    printf("A densidade demográfica de %s é: %.2f hab/km²\n", cidade1, densidadeDemografica1);
    printf("O super poder é: %.2f", superPoder1);

    //Carta 02:
    printf("\n === %s ===\n", codigo2); //achei que daria charme a carta se o codigo estivesse em destaque
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3lf Km²\n", area2);
    printf("PIB: %.1lf bilhões de reais(R$)\n", pib2 / 1e9);
    printf("Numero de pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O PIB per capita de %s é: %.2f mil R$ por habitante\n", cidade2, pibpercapto2 / 1000);
    printf("A densidade demográfica de %s é: %.2f hab/km²\n", cidade2, densidadeDemografica2);
    printf("O super poder é: %.2f\n", superPoder2);


    //Comparação entre as cartas
    printf("\n--- Compração ---\n");
    printf("População: Carta %s - %s (%d) / Carta %s - %s (%d)\n", codigo1, cidade1, populacao1 > populacao2, codigo2, cidade2, populacao2 > populacao1);
    printf("Area: Carta %s - %s (%d) / Carta %s - %s (%d)\n", codigo1, cidade1, area1 > area2, codigo2, cidade2, area2 > area1);
    printf("Pib: Carta %s - %s (%d) / Carta %s - %s (%d)\n", codigo1, cidade1, pib1 > pib2, codigo2, cidade2, pib2 > pib1);
    printf("Pontos Turisticos: Carta %s - %s (%d) / Carta %s - %s (%d)\n", codigo1, cidade1, pontosTuristicos1 > pontosTuristicos2, codigo2, cidade2, pontosTuristicos2 > pontosTuristicos1);
    printf("Pib per capita: Carta %s - %s (%d) / Carta %s - %s (%d)\n", codigo1, cidade1, pibpercapto1 > pibpercapto2, codigo2, cidade2, pibpercapto2 > pibpercapto1);
    printf("Densida demográfica: Carta %s - %s (%d) / Carta %s - %s (%d)\n", codigo1, cidade1, densidadeDemografica1 < densidadeDemografica2, codigo2, cidade2, densidadeDemografica2 < densidadeDemografica1);
    printf("Super Poder: Carta %s - %s (%d) / Carta %s - %s (%d)\n", codigo1, cidade1, superPoder1 > superPoder2, codigo2, cidade2, superPoder2 > superPoder1);

    //Conclusão de cadastro:
    printf("\nCartas de Super trunfo Cadastradas com sucesso!");


    //Encerramento
    return 0;
}