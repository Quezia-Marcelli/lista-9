#include <stdio.h>
#include <stdlib.h>

void matriz(int **matriz, int l, int c) {
    for (int linha = 0; linha < l; linha++) {
        for (int coluna = 0; coluna < c; coluna++) {
            printf("Digite o valor da posicao [%d][%d]: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}