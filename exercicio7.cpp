#include <stdio.h>
#include <stdlib.h>

void liberarMatriz(int** matriz, int l){
    for(int i = 0; i < l; i++){
        free(matriz[i]);
    }
    free(matriz);
}