#include <stdio.h>
#include <stdlib.h>

void multiplicarMatrizes(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimirMatriz(int M[3][3], const char* nome) {
    printf("Matriz %s:\n", nome);
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%2d ", M[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
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

    int matrizC[3][3];

    multiplicarMatrizes(matrizA, matrizB, matrizC);

    imprimirMatriz(matrizA, "A");
    imprimirMatriz(matrizB, "B");
    imprimirMatriz(matrizC, "A x B");

    system("pause");
    return 0;
}
