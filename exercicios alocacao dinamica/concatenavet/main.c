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
void printavet(int *v, int n){
    int i;
    printf("\n\n");
    for(i=0;i<n;i++){
        printf("%d  ", v[i]);
    }
}

int* concatenavet(int *v1, int *v2, int n1, int n2){
    int i, *v3=alocavetor(n1+n2);
    for(i=0;i<n1;i++){
        v3[i]=v1[i];
    }
    for(i=0;i<n2;i++){
        v3[i+n1]=v2[i];
    }
    return v3;
}
int main()
{
    int n1, n2, *v1, *v2, *v3;
    printf("Quantidade de elementos do 1o vetor: ");
    scanf("%d", &n1);
    printf("\nQuantidade de elementos do 2o vetor: ");
    scanf("%d", &n2);
    v1=alocavetor(n1);
    v2=alocavetor(n2);
    preenchevet(v1, n1);
    preenchevet(v2, n2);
    v3=concatenavet(v1,v2,n1,n2);
    printf("\nVetor 1: ");
    printavet(v1,n1);
    printf("\nVetor 2: ");
    printavet(v2,n2);
    printf("\nVetores concatenados: ");
    printavet(v3, n1+n2);
    liberavet(v1);
    liberavet(v2);
    liberavet(v3);
    return 0;
}
