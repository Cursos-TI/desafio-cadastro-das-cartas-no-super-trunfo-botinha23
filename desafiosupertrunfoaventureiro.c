#include <stdio.h>

int main() {
    
    printf("Desafio nível aventureiro");

    char nome_cidade[30];
    char codigo_da_cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

    printf("Entre com a cidade\n");
    scanf(" %s", &nome_cidade);

    printf("Entre com o codigo da cidade\n");
    scanf("%s", &codigo_da_cidade);

    printf("Entre com a populacao\n");
    scanf("%f", &populacao);

    printf("Entre com a area\n");
    scanf("%f", &area);

    printf("Entre com o pib\n");
    scanf(" %f", &pib);

    printf("Entre com o numero de pontos turisticos\n");
    scanf(" %d", &pontos_turisticos);

    printf("%d", pontos_turisticos);


    printf("Cidade: %s - Codigo da cidade: %s\n", nome_cidade, codigo_da_cidade);
    printf("População: %F - Área: %e\n", populacao, area);
    printf("PIB: %f - Número de pontos turísticos: %d\n", pib, pontos_turisticos);
 
    densidade_populacional = (populacao / area);
    pib_per_capita = (pib / populacao);
 
    printf("A densidade populacional é: %.2F\n", densidade_populacional);
    printf("O pib per capita é: %.2F\n", pib_per_capita);