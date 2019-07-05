#include <stdio.h>
#include <stdlib.h>

int** alocamat (int x, int y){
    int** matriz=(int**) calloc(x,sizeof(int*));
    int i;
    for(i=0;i<x;i++){
        matriz[i]=(int *) calloc(y,sizeof(int));
    }
    return matriz;
}

void matriz_preenche(int **matriz, int x, int y){
    int i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            matriz[i][j]=i+j;
        }
    }
}

void matriz_printa(int **matriz, int x, int y){
    int i,j;
    for(i=0;i<x;i++){
        printf("\n");
        for(j=0;j<y;j++){
            printf(" %d |",matriz[i][j]);
        }
    }
    printf("\n");
}

void realoca_matriz(int **matriz, int x, int y){
    int i,j;
    matriz=(int**) realloc(matriz, x*sizeof(int*));
    for(i=0;i<x;i++){
        matriz[i]=(int*) realloc(matriz[i], y*sizeof(int));
    }


}

void menu(void){
    int **matriz;
    int x,y, op, i, j, valor;
    printf("\nDigite o valor de i: ");
    scanf("%d", &x);
    printf("\nDigite o valor de j: ");
    scanf("%d", &y);
    matriz=alocamat(x,y);
    matriz_preenche(matriz,x,y);
    while(1==1){
        printf("\nDigite o que deseja fazer:\n1 - alterar valor das casas\n2 - realocar tamanho da matriz\n3 - imprimir matriz\n4 - sair\n");
        scanf("%d", &op);
        if(op==1){
            printf("\nDigite o valor da linha que deseja alterar: ");
            scanf("%d", &i);
            i--;
            printf("\nDigite o valor da coluna que deseja alterar: ");
            scanf("%d", &j);
            j--;
            printf("\nDigite o valor desejado: ");
            scanf("%d", &valor);
            matriz[i][j]=valor;
        }else if(op==2){
            printf("\nDigite o valor de i: ");
            scanf("%d", &x);
            printf("\nDigite o valor de j: ");
            scanf("%d", &y);
            realoca_matriz(matriz, x,y);
        }else if(op==3){
            matriz_printa(matriz,x,y);
        }else if(op==4){
            break;
        }else{
            printf("\nOpção invalida");
            continue;
        }
    }
    liberamatriz(matriz, x);
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
    menu();
    return 0;
}
