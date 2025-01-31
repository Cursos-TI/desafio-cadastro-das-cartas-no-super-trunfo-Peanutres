#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //inclusão das variaveis e seus tipos:
    int pontoturisticos, populacao;
    char estado;
    char* codcidade[3];
    char nomecidade[40];
    float area, pib, pibcapta, densipopula;
    
    //Requirimento e recebimento de dados do usuario:
    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Código da carta: \n");
    scanf("%s", &codcidade);

    printf("Nome da cidade: \n");
    scanf(" %s", &nomecidade);

    printf("Quantidade pontos turisticos: \n");
    scanf("%d", &pontoturisticos);
 
    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area da cidade: \n");
    scanf(" %f", &area);

    printf("Pib da cidade: \n");
    scanf(" %f", &pib);

    //media para pib percapta e densidade populacional:
    pibcapta = (float) pib / populacao;
    densipopula = (float) populacao / area;

    // Exibição dos Dados das Cartas:
    printf("Estado: %c\n", estado);
    printf("Codigo da cidade: %s\n", codcidade);
    printf("Cidade: %s\n", nomecidade);
    printf("Pontos Turisticos: %d\n", pontoturisticos);
    printf("Area: %.2f km²\n", area);
    printf("População: %d\n", populacao);
    printf("Densidade População: %.2f pessoas/km²\n", densipopula);
    printf("PIB: %.2f \n", pib);
    printf("PIB Percapta: %.2f reais\n", pibcapta);

    return 0;
}
