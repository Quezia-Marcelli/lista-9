#include <stdio.h>
#include <stdlib.h>


void somarMatrizes(int matA[3][3], int matB[3][3], int resultado[3][3]) {
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            resultado[linha][coluna] = matA[linha][coluna] + matB[linha][coluna];
        }
    }
}

int main() {
    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizB[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    printf("Matriz A:\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%2d ", matrizA[i][j]);
        }
        printf("]\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%2d ", matrizB[i][j]);
        }
        printf("]\n");
    }

    int matrizResultado[3][3];

    somarMatrizes(matrizA, matrizB, matrizResultado);

    printf("Resultado da soma das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%2d ", matrizResultado[i][j]);
        }
        printf("]\n");
    }

    system("pause");
    return 0;
}
