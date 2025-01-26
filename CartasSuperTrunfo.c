#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade = 20;
    char codigo_da_cidade = 3;
    float população = 1000000;
    double área = 1000000;
    float pib = 100;
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

    printf("Digite o numero de pontos turísticos\n");
    scanf("%d", &turisticos);





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
