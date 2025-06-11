#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int linha = -1, coluna = -1;

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Digite um numero para buscar na matriz: ");
    scanf("%d", &x);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                linha = i;
                coluna = j;
            }
        }
    }

    
    if (linha != -1 && coluna != -1)
        printf("O numero %d foi encontrado na posicao (%d, %d) da matriz.\n", x, linha + 1, coluna + 1);
    else
        printf("O numero %d nao foi encontrado na matriz.\n", x);
    
    system("pause");
    return 0;
}
