#include <stdio.h>
#include <stdlib.h>
void inverte(int vet[], int n, int cont){
    int aux;
    aux=vet[n];
    vet[n]=vet[cont];
    vet[cont]=aux;
    if (cont<n){
        inverte(vet, n-1, cont+1);
    }
}
int main()
{
    int i, vet[10];
    for(i=0; i<10; i++){
        printf("\nDigite um valor: ");
        scanf("%d", &vet[i]);
    }
    inverte(vet, 9, 0);
    printf("\n\n");
    for(i=0; i<10; i++){
        printf("%d  ", vet[i]);
    }
    return 0;
}
