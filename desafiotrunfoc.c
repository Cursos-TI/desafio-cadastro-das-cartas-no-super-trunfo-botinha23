#include <stdio.h>

int main() {
    
    char nome_cidade[30];
    char codigo_da_cidade[50];
    float populacao;
    float area;
    float pib;
    int turisticos;

    printf("Entre com a cidade\n");
    scanf("%s", &nome_cidade);

    printf("Entre com o codigo da cidade\n");
    scanf("%s", &codigo_da_cidade);

    printf("Entre com a populacao\n");
    scanf("%d", &populacao);

    printf("Entre com a area\n");
    scanf("%f", &area);

    printf("Entre com o pib\n");
    scanf("%f", &pib);

    printf("Entre com o numero de pontos turisticos\n");
    scanf("%d\n ", &turisticos);
    printf(" %d\n", turisticos);

    printf("Cidade: %s - Codigo da cidade: %s\n", nome_cidade, codigo_da_cidade);
    printf("População: %F - Área: %e\n", populacao, area);
    printf("PIB: %f - Número de pontos turísticos: %d\n", pib,turisticos);
    
}