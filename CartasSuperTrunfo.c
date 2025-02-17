#include <stdio.h>

    //inserção de variaveis necessarias e seus tipos:
    unsigned int populacao1, populacao2; //uso de modificadores unsigned e long para aumentar a quantidade de numeros e retirar numeros negaivos
    int pontosturistico1, pontosturistico2;
    char codestado1, codestado2;
    char *codcidade1[3], codcidade2[3]; 
    char nomecidade1[40], nomecidade2[40];
    float area1, area2, pib1, pib2, densipopula1, densipopula2, pibcapta1, pibcapta2, pibresultado1, pibresultado2, poder1, poder2;

    //inicio do programa:
int main(){

    printf("***  Jogo Super Trunfo  ***\n");

    //mensagem de requisição e assim como recebimento dos doados inseridos pelo usuario:
    printf("Insira os dados da primeira carta: \n");
    printf("Insira o codigo do primeiro estado: \n");
    scanf("%s", &codestado1);
    printf("Insira codigo da primeira cidade: \n");
    scanf(" %s", &codcidade1);
    printf("Insira o nome da primeira cidade: \n");
    scanf(" %s", &nomecidade1);
    printf("Insira a quantidade de pontos turisticos da primeira cidade: \n");
    scanf (" %d", &pontosturistico1);
    printf("Insira a quantidade de população da primeira cidade: \n");
    scanf (" %u", &populacao1);
    printf("Insira a area da primeira cidade em km2: \n");
    scanf(" %f", &area1);
    printf("Insira o PIB da primeira cidade: \n");
    scanf(" %f", &pib1);
    printf("insira os dados da segunda carta: \n");
    printf("Insira o codigo do segundo estado: \n");
    scanf(" %s", &codestado2);
    printf("Insira codigo da segunda cidade: \n");
    scanf(" %s", &codcidade2);
    printf("Insira o nome da segunda cidade: \n");
    scanf(" %s", &nomecidade2);
    printf("Insira a quantidade de pontos turisticos da segunda cidade: \n");
    scanf (" %d", &pontosturistico2);
    printf("Insira a quantidade de população da segunda cidade: \n");
    scanf (" %u", &populacao2);
    printf("Insira a area da segunda cidade em km2: \n");
    scanf(" %f", &area2);
    printf("Insira o PIB da segunda cidade: \n");
    scanf(" %f", &pib2);

    //calculadoras com uso de casting em alguns casos para a certeza que tenha a conversão para float
    densipopula1 = (float) populacao1 / area1;
    densipopula2 = (float) populacao2 / area2;
    pibcapta1 = (float) pib1 / populacao1;
    pibcapta2 = (float) pib2 / populacao2;
    pibresultado1 = pib1 / 1000000000;
    pibresultado2 = pib2 / 1000000000;
    poder1 = (float) area1 + pontosturistico1 + populacao1 + pib1 + pibcapta1 + (1/densipopula1);
    poder2 = (float) area2 + pontosturistico2 + populacao2 + pib2 + pibcapta2 + (1/densipopula1);

    //mostra de dados que foram inseridos pelo usuario lado a lado:
    printf("Cod Estado - Primeira carta: %c - Segunda carta: %c\n", codestado1, codestado2);
    printf("Cod Cidade - Primeira carta: %s - Segunda carta: %s\n", codcidade1, codcidade2);
    printf("Nome da Cidade - Primeira carta: %s - Segunda carta: %s\n", nomecidade1, nomecidade2);
    printf("Quantidade de pontos turisticos - Primeira carta: %d - Segunda carta: %d\n", pontosturistico1, pontosturistico2);
    printf("População - Primeira carta: %d - Segunda carta: %d\n", populacao1, populacao2);
    printf("Area - Primeira carta: %.2f km2 - Segunda carta: %.2f km2\n", area1, area2);
    printf("Densidade populacional - Primeira carta: %.2f - Segunda carta: %.2f\n", densipopula1, densipopula2);
    printf("PIB - Primeira carta: %.2f bilhoes - Segunda carta: %.2f bilhões\n", pibresultado1, pibresultado2);
    printf("PIB percapta - Primeira carta: %.2f - Segunda carta: %.2f\n", pibcapta1, pibcapta2);
    printf("Superpoder - Primeira carta: %.2f - Segunda carta: %.2f\n", poder1, poder2);


    //comparação dos dados da cidade:
    printf("Carta com maior numero de pontos turisticos: %d\n", pontosturistico1 > pontosturistico2);
    printf("Carta com maior area: %d\n", area1 > area2);
    printf("Carta com maior população: %d\n", populacao1 > populacao2);
    printf("Carta com menor densidade populacional: %d\n", densipopula1 < densipopula2);
    printf("Carta com maior PIB: %d\n", pib1 > pib2);
    printf("Carta com maior PIB Percapta: %d\n", pibcapta1 > pibcapta2);
    printf("Carta com maior superpode: %d\n", poder1 > poder2);

    return 0;
}
