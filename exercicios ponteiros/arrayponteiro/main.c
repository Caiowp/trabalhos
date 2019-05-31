#include <stdio.h>
#include <stdlib.h>
void printarray(int *vet){
    int i;
    for(i=0; i<5;i++){
        printf("  %d", *vet);
        vet++;
    }
}
int main()
{
    int vet[5], i;
    for(i=0;i<5;i++){
        printf("\nDigite um valor: ");
        scanf("%d", &vet[i]);
    }
    printf("\n\n");
    printarray(&vet);
    return 0;
}
