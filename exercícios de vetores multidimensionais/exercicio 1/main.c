#include <stdio.h>
#include <stdlib.h>


int** alocamat(int x, int y){
    int **matriz=(int **) calloc(x,sizeof(int*));
    int i;
    for(i=0;i<x;i++){
        matriz[i]=(int *) calloc(y,sizeof(int));
    }
    return matriz;
}

void matriz_printa(int **matriz, int x, int y){
    int i,j;
    for(i=0;i<x;i++){
        printf("\n");
        for(j=0;j<y;j++){
            printf(" %d |",matriz[i][j]);
        }
    }
}

void liberamatriz(int **matriz, int x){
    int i;
    for(i=0;i<x;i++){
        free(matriz[i]);
    }
    free(matriz);
}

int main()
{
    int **matriz;
    int x,y;
    printf("\nDigite o valor de i: ");
    scanf("%d", &x);
    printf("\nDigite o valor de j: ");
    scanf("%d", &y);
    matriz=alocamat(x,y);
    matriz_printa(matriz,x,y);
    liberamatriz(matriz, x);
    return 0;
}
