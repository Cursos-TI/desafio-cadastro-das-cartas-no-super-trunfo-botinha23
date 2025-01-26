#include <stdio.h>

int main() {

    
    char cidade = 20;
    char codigo_da_cidade = 10;
    float população = 1000000;
    double área = 1000000;
    float pib = 1000000;
    int turisticos = 100;

    printf("Digite o nome da cidade\n");
    scanf("%s", &cidade);

    printf("Digite o codigo da cidade\n");
    scanf("%s", &codigo_da_cidade );

    printf("Digite a população\n");
    scanf("%f", &população);

    printf("Digite a área\n");
    scanf("%f", &área);

    printf("Digite o pib\n");
    scanf("%f", &pib);

    printf("Digite o numero_de_pontos_turisticos\n");
    scanf("%d", &turisticos);

    printf("Cidade: %s - Codigo da cidade: %s\n", cidade, codigo_da_cidade);
    printf("População: %F - Área: %e\n", população, área);
    printf("PIB: %f - Número de pontos turísticos: %d", pib, turisticos);

    return 0;
}