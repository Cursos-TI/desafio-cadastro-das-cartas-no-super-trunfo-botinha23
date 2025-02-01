#include <stdio.h>

int main() {
    
    char nome_da_cidade;
    char codigo_da_cidade;
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Entre com a cidade\n");
    scanf("%s", &nome_da_cidade);

    printf("Entre com o codigo da cidade\n");
    scanf("%s", &codigo_da_cidade);

    printf("Entre com a populacao\n");
    scanf("%f", &populacao);

    printf("Entre com a area\n");
    scanf("%f", &area);

    printf("Entre com o pib\n");
    scanf("%f", &pib);

    printf("Entre com o numero de pontos turisticos\n");
    scanf(" %d", &pontos_turisticos);

    printf("Cidade: %s - Codigo da cidade: %s\n", nome_da_cidade, codigo_da_cidade);
    printf("População: %F - Área: %e\n", populacao, area);
    printf("PIB: %f - Número de pontos turísticos: %d\n", pib, pontos_turisticos);
    

}