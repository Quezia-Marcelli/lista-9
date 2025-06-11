#include <stdio.h>
#include <stdlib.h>

void imprimir_mat(int **matriz, int l, int c) {
    printf("\nMatriz:\n");
    for (int linha = 0; linha < l; linha++) {
        for (int coluna = 0; coluna < c; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}