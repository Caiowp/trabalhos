#include <stdio.h>
#include <stdlib.h>
int positivonegativo(int v){
    if (v>=0) return 1;
    else return 0;
}
int somadivisores(int v){
    int i, somadiv=0;
    for(i=1;i<v;i++){
        if (v%i==0){
            somadiv+=i;
        }
    }
    return somadiv;
}
int main()
{
    int v;
    printf("Digite um valor positivo:");
    scanf("%d", &v);
    if (positivonegativo(v)==1){
        printf("\nA soma dos divisores eh %d", somadivisores(v));
    }else printf("\nEsse valor nao eh positivo");
    return 0;
}
