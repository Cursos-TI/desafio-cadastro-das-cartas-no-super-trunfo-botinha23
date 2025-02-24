#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("*** Desafio nível mestre ***\n");

    int resultado1, resultado2, pontos_pais1 = 0, pontos_pais2 = 0;
    int pontos_turisticos1 = 120, pontos_turisticos2 = 200;
    float populacao1 = 1000, populacao2 = 500;
    float area1 = 250, area2 = 150;
    float pib1 = 2, pib2 = 3;
    float densidade_populacional1 = populacao1 / area1;
    float densidade_populacional2 = populacao2 / area2;
    char primeiroAtributo, segundoAtributo;
    char pais1[100], pais2[100];

    printf("\n*** Bem-vindo ao jogo! ***\n");

    printf("Escolha os países\n");
    printf("Entre com o nome do país 1: ");
    scanf("%s", pais1);
    printf("Entre com o nome do país 2: ");
    scanf("%s", pais2);

    printf("\nEscolha o primeiro atributo:\n");
    printf("1. Pontos turísticos\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade populacional\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
        case '1':
            printf("Você escolheu pontos turísticos\n");
            resultado1 = pontos_turisticos1 > pontos_turisticos2;
            break;
        case '2':
            printf("Você escolheu população\n");
            resultado1 = populacao1 > populacao2;
            break;
        case '3':
            printf("Você escolheu área\n");
            resultado1 = area1 > area2;
            break;
        case '4':
            printf("Você escolheu PIB\n");
            resultado1 = pib1 > pib2;
            break;
        case '5':
            printf("Você escolheu densidade populacional\n");
            resultado1 = densidade_populacional1 > densidade_populacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Atribui pontos para o país vencedor no primeiro atributo
    if (resultado1) {
        pontos_pais1++;
    } else {
        pontos_pais2++;
    }

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("1. Pontos turísticos\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade populacional\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo! Reinicie o jogo e escolha atributos diferentes.\n");
        return 1;
    }

    switch (segundoAtributo) {
        case '1':
            printf("Você escolheu pontos turísticos\n");
            resultado2 = pontos_turisticos1 > pontos_turisticos2;
            break;
        case '2':
            printf("Você escolheu população\n");
            resultado2 = populacao1 > populacao2;
            break;
        case '3':
            printf("Você escolheu área\n");
            resultado2 = area1 > area2;
            break;
        case '4':
            printf("Você escolheu PIB\n");
            resultado2 = pib1 > pib2;
            break;
        case '5':
            printf("Você escolheu densidade populacional\n");
            resultado2 = densidade_populacional1 > densidade_populacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Atribui pontos para o país vencedor no segundo atributo
    if (resultado2) {
        pontos_pais1++;
    } else {
        pontos_pais2++;
    }

    // Exibição organizada dos resultados
    printf("\n================ RESULTADO FINAL ================\n");
    printf("Comparação entre: %s vs %s\n", pais1, pais2);
    printf("------------------------------------------------\n");
    printf("Atributo 1: ");
    switch (primeiroAtributo) {
        case '1': printf("Pontos turísticos\n"); break;
        case '2': printf("População\n"); break;
        case '3': printf("Área\n"); break;
        case '4': printf("PIB\n"); break;
        case '5': printf("Densidade populacional\n"); break;
    }
    printf(" - %s: %.2f\n", pais1, (primeiroAtributo == '1') ? pontos_turisticos1 : 
                                  (primeiroAtributo == '2') ? populacao1 :
                                  (primeiroAtributo == '3') ? area1 :
                                  (primeiroAtributo == '4') ? pib1 :
                                  densidade_populacional1);
    printf(" - %s: %.2f\n", pais2, (primeiroAtributo == '1') ? pontos_turisticos2 : 
                                  (primeiroAtributo == '2') ? populacao2 :
                                  (primeiroAtributo == '3') ? area2 :
                                  (primeiroAtributo == '4') ? pib2 :
                                  densidade_populacional2);

    printf("------------------------------------------------\n");
    printf("Atributo 2: ");
    switch (segundoAtributo) {
        case '1': printf("Pontos turísticos\n"); break;
        case '2': printf("População\n"); break;
        case '3': printf("Área\n"); break;
        case '4': printf("PIB\n"); break;
        case '5': printf("Densidade populacional\n"); break;
    }
    printf(" - %s: %.2f\n", pais1, (segundoAtributo == '1') ? pontos_turisticos1 : 
                                  (segundoAtributo == '2') ? populacao1 :
                                  (segundoAtributo == '3') ? area1 :
                                  (segundoAtributo == '4') ? pib1 :
                                  densidade_populacional1);
    printf(" - %s: %.2f\n", pais2, (segundoAtributo == '1') ? pontos_turisticos2 : 
                                  (segundoAtributo == '2') ? populacao2 :
                                  (segundoAtributo == '3') ? area2 :
                                  (segundoAtributo == '4') ? pib2 :
                                  densidade_populacional2);
    
    printf("------------------------------------------------\n");
    printf("Pontuação final: \n");
    printf("%s: %d pontos\n", pais1, pontos_pais1);
    printf("%s: %d pontos\n", pais2, pontos_pais2);
    printf("------------------------------------------------\n");

    // Determinar o vencedor
    if (pontos_pais1 > pontos_pais2) {
        printf("*** %s venceu! Parabéns! ***\n", pais1);
    } else if (pontos_pais1 < pontos_pais2) {
        printf("*** %s venceu! Parabéns! ***\n", pais2);
    } else {
        printf("*** Houve um empate! ***\n");
    }

    return 0;
}