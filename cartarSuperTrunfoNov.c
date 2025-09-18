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
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

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
    scanf("%f", &area1);

    printf("Qual o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem a Cidade: \n");
    scanf("%d", &pontosTuristicos1);

    //Carta 02:
    //Variaveis:
    int carta2;
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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
    scanf("%f", &area2);

    printf("Qual o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a Cidade: \n");
    scanf("%d", &pontosTuristicos2);

    //Cartas Cadastrados:
    //Carta 01:
    printf("\n === %s ===\n", codigo1); //achei que daria charme a carta se o codigo estivesse em destaque
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n",area1);
    printf("PIB: %.2f bilhões de reais(R$)\n", pib1);
    printf("Numero de pontos Turisticos: %d\n", pontosTuristicos1);

    //Carta 02:
    printf("\n === %s ===\n", codigo2); //achei que daria charme a carta se o codigo estivesse em destaque
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais(R$)\n", pib2);
    printf("Numero de pontos Turisticos: %d\n", pontosTuristicos2);

    //Conclusão de cadastro:
    printf("\nCartas de Super trunfo Cadastradas com sucesso!");

    //Encerramento
    return 0;
}
