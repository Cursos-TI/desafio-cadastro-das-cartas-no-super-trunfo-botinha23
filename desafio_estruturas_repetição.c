#include <stdio.h>

// Função para mover peças
void moverPeca(const char *peca) {
    int casas;
    char direcao[10];

    printf("Quantas casas deseja mover a %s? ", peca);
    scanf("%d", &casas);
    
    printf("Para qual direção? (cima, baixo, esquerda, direita, diagonal): ");
    scanf("%s", direcao);
    
    // Imprime a direção escolhida a quantidade de vezes informada
    for (int i = 0; i < casas; i++) {
        printf("%s\n", direcao);
    }
    printf("\n");
}

int main() {
    int escolha;
    do {
        printf("Escolha a peça para mover:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo (movimento fixo em 'L')\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                moverPeca("Torre");
                break;
            case 2:
                moverPeca("Bispo");
                break;
            case 3:
                moverPeca("Rainha");
                break;
            case 4:
                printf("Movendo Cavalo:\n");
                printf("cima\ncima\ndireita\n\n");
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
        }
    } while (escolha != 0);
    
    return 0;
}
