#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //inclusão de variaves conforme seu tipo e necessidades para cada tipo de entrada:
    int pontoturisticos1, pontoturisticos2;
    unsigned long int populacao1, populacao2;
    char estado1, estado2;
    char *codcidade1[10];
    char codcidade2[10];
    char nomecidade1[40], nomecidade2[40];
    float area1, area2, pib1, pib2, pibcapta1, pibcapta2, densipopula1, densipopula2, superpoder1, superpoder2;
    
    //Requerimento de dados ao usuario e entrada de dados que o usuario fornece ao sistema:
    //foi usado um espaçamento entre cada comando para facilitar a visualização de cada comanda de leitura
    printf("Primero estado: \n");
    scanf("%c", &estado1);

    printf("Segundo estado: \n");
    scanf(" %c", &estado2);

    printf("Código da primeira carta: \n");
    scanf(" %s", &codcidade1);

    printf("Código da segunda carta: \n");
    scanf(" %s", &codcidade2);

    printf("Nome da primeira cidade: \n");
    scanf(" %s", &nomecidade1);

    printf("Nome da segunda cidade cidade: \n");
    scanf(" %s", &nomecidade2);

    printf("Quantidade pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontoturisticos1);

    printf("Quantidade pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontoturisticos2);
 
    printf("População da primeira cidade: \n");
    scanf("%u", &populacao1);

    printf("População da segunda cidade: \n");
    scanf("%u", &populacao2);

    printf("Area da primeira cidade: \n");
    scanf(" %f", &area1);

    printf("Area da segunda cidade: \n");
    scanf(" %f", &area2);

    printf("Pib da primeira cidade: \n");
    scanf(" %f", &pib1);

    printf("Pib da segunda cidade: \n");
    scanf(" %f", &pib2);

    //calculadoras, com uso de divisão para criar os resultados de pib percapta e densidade da população
    //e tambem uso de soma para fazer o calculo do superpoder da carta
    //foi usado o casting (float) como melhor forma de conversão de dados, ficando mais visivel a quem venha fazer vizualição do codigo
    //assim como tambem para segurar que a variavel torne-se float
    pibcapta1 = (float) pib1 / populacao1;
    pibcapta2 = (float) pib2 / populacao2;
    densipopula1 = (float) populacao1 / area1;
    densipopula2 = (float) populacao2 / area2;
    superpoder1 = (float) populacao1 + area1 + pib1 + pibcapta1 + pontoturisticos1 / densipopula1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pibcapta2 + pontoturisticos2 / densipopula2;


    //Exibição dos Dados das Cartas:
    printf("Estado 1: %c - Estado 2: %c\n", estado1, estado2);
    printf("Codigo da primeira cidade: %s - Codigo da segunda cidade: %s\n", codcidade1, codcidade2);
    printf("Nome da primeira cidade: %s - Nome da Segunda Cidade: %s\n", nomecidade1, nomecidade2);
    printf("Quantidade de pontos turisticos da primeira cidade: %d - Quantida de pontos turisticos da segunda cidade: %d\n", pontoturisticos1, pontoturisticos2);
    printf("Area da primeira cidade: %.3f km² - Area da segunda cidade %.3f\n", area1, area2);
    printf("População da primeira cidade: %u - População da segunda cidade: %u\n", populacao1, populacao2);
    printf("Densidade Populacional da primeira cidade: %.3f pessoas/km² - Densidade populacional da segunda cidade: %.3f pessoas/km²\n", densipopula1, densipopula2);
    printf("PIB da primeira cidade: %.3f reais - PIB da segunda cidade: %.3f reais\n", pib1, pib2);
    printf("PIB Percapta da primeira cidade: %.3f reais - PIB Percapta da segunda cidade: %.3f\n", pibcapta1, pibcapta2);
    printf("Superpoder da primeira cidade: %.3f - Superpoder da segunda carta: %.3f\n", superpoder1, superpoder2);

    //exibição e comparação dos dados
    printf("Cidade com maior numero de pontos turisticos: %d\n", pontoturisticos1 > pontoturisticos2);
    printf("Cidade com maior area: %d\n", area1 > area2);
    printf("Cidade com maior população: %d\n", populacao1 > populacao2);
    printf("Cidade com menor densidade populacional: %d\n", densipopula1 < densipopula2);
    printf("Cidade com maior PIB: %d\n", pib1 > pib2);
    printf("Cidade com maior PIB Percapta: %d\n", pibcapta1 > pibcapta2);
    printf("Cidade com maior superpode: %d\n", superpoder1 > superpoder2);

    return 0;
}
