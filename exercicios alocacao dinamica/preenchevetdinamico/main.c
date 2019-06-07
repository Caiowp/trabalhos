#include <stdio.h>
#include <stdlib.h>
int* alocavetor(int n){
    int *v=(int*) calloc(n,sizeof(int));
    return v;
}

void liberavet(int *v){
    free(v);
}

void preenchevet(int *v, int n){
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("\nDigite um valor para a posicao %d do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
}

int main()
{
    int n, *v;
    printf("Quantidade de elementos: ");
    scanf("%d", &n);
    v=alocavetor(n);
    preenchevet(v, n);
    liberavet(v);
    return 0;
}
