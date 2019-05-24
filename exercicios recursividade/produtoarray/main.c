#include <stdio.h>
#include <stdlib.h>
int somaarray(int vet[10], int n){
    if (n==0){
        return vet[0];
    }else{
        return vet[n]*somaarray(vet, n-1);
    }
}

int main()
{

    int vet[10], i;
    for(i=0;i<10;i++){

        printf("\nDigite um valor: ");
        scanf("%d", &vet[i]);
    }
    printf("\n\nA soma do vetor eh %d", somaarray(vet, 9));
    return 0;
}
