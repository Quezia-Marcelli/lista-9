#include <stdio.h>
#include <stdlib.h>

int** criar(int linhas, int colunas) {
    int** matriz = (int**) malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }
    return matriz;
}

void liberar(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void preencher(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int** matriz, int linhas, int colunas) {
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int l1, c1, l2, c2;

    printf("Digite o numero de linhas e colunas da primeira matriz: ");
    scanf("%d%d", &l1, &c1);

    printf("Digite o numero de linhas e colunas da segunda matriz: ");
    scanf("%d%d", &l2, &c2);

    if (c1 != l2) {
        printf("Produto vetorial impossivel\n");
        return 1;
    }

    int** A = criar(l1, c1);
    int** B = criar(l2, c2);
    int** R = criar(l1, c2);

    printf("\nPreencha a primeira matriz:\n");
    preencher(A, l1, c1);
    printf("\nPreencha a segunda matriz:\n");
    preencher(B, l2, c2);

    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            R[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultado da multiplicacao:\n");
    imprimirMatriz(R, l1, c2);

    liberar(A, l1);
    liberar(B, l2);
    liberar(R, l1);

    system("pause");
    return 0;
}