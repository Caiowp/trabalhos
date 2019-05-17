#include <stdio.h>
#include <stdlib.h>
int positivonegativo(int v){
    if (v>=0) return 1;
    else return 0;
}
int main()
{
    int v;
    printf("Digite um valor: ");
    scanf("%d", &v);
    if (positivonegativo(v)==1) printf("\nSeu numero eh positivo!");
    else printf("\nSeu numero eh negativo!");
    return 0;
}
