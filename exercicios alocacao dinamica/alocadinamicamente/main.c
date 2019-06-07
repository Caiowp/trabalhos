#include <stdio.h>
#include <stdlib.h>
int* alocavetor(int n){
    int *v=(int*) calloc(n,sizeof(int));
    return v;
}

void liberavet(int *v){
    free(v);
}

int main()
{
    int i,n, *v;
    printf("Quantidade de elementos: ");
    scanf("%d", &n);
    v=alocavetor(n);
    liberavet(v);
    return 0;
}
