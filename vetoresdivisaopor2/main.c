#include <stdio.h>
#include <stdlib.h>
void organizavet(int* v, int n){
    int i, j, aux;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[j]%2==0){
               aux=v[j];
               v[j]=v[i];
               v[i]=aux;
               break;
            }
        }
    }
}
int main()
{
    int v[11], i;
    for(i=0;i<11;i++){
        printf("\nDigite um valor: ");
        scanf("%d", &v[i]);
    }
    organizavet(v,11);
    printf("\n\n");
    for(i=0;i<11;i++){
        printf("%d  ", v[i]);
    }
    return 0;
}
