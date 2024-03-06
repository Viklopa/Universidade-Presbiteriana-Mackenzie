#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numero_sorteado = rand() % 100 + 1;
    int palpite;

    printf("Tente adivinhar o número sorteado (entre 1 e 100):\n");

    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, insira um valor válido entre 1 e 100.\n");
            continue;
        }

        if (palpite == numero_sorteado) {
            printf("Parabéns!!! Você acertou!\n");
            break;
        } else if (palpite < numero_sorteado) {
            printf("Você chutou muito baixo!\nO valor certo é: %d\n\n", numero_sorteado);
          break;
        } else {
            printf("Você chutou muito alto!\nO valor certo é %d\n\n", numero_sorteado);
          break;
        }
    } while (1);

    return 0;
}