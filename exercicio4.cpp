#include <stdio.h>
#include <stdlib.h>

int main() {
    int sdiagonal = 0;

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz:\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("]\n");
    }

    for (int i = 0; i < 3; i++) 
        sdiagonal += matriz[i][i];
    

    printf("Soma da diagonal principal: %d\n", sdiagonal);

    system("pause");
    return 0;
}
