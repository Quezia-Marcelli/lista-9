#include <stdio.h>
#include <stdlib.h>


void transposta(int original[3][3], int transposta[3][3]) {
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            transposta[linha][coluna] = original[coluna][linha];
        }
    }
}

int main() {
    int matrizOriginal[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizTransposta[3][3];

    printf("Matriz Original:\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%2d ", matrizOriginal[i][j]);
        }
        printf("]\n");
    }

    transposta(matrizOriginal, matrizTransposta);

    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%2d ", matrizTransposta[i][j]);
        }
        printf("]\n");
    }

    system("pause");
    return 0;
}
