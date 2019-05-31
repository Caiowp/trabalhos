#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[5],*vet2, i;
    for(i=0;i<5;i++){
        printf("\nDigite um valor: ");
        scanf("%d", &vet1[i]);
    }
    printf("\n\n");
    vet2=&vet1[0];
    for(i=0;i<5;i++){
        printf("%d  ", *vet2);
        vet2++;
    }
    return 0;
}
