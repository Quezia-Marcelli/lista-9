#include <stdio.h>
#include <stdlib.h>

int** alocar(int linhas, int colunas){
    int **mat = (int **) malloc(linhas * sizeof(int *));
    if(mat == NULL)
        return NULL;

    for(int i = 0; i < linhas; i++){
        mat[i] = (int *) malloc(colunas * sizeof(int));
        if(mat[i] == NULL)
            return NULL;
    }    
    return mat;
}

int main(){
    int linhas, colunas;
    int **matriz;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    matriz = alocar(linhas, colunas);
    if(matriz == NULL){
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = i * colunas + j + 1;
        }
    }

    printf("Matriz:\n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
