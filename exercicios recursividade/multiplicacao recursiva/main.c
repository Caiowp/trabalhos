#include <stdio.h>
#include <stdlib.h>
int multiplicacao(int x, int n){
    if (n==1) return x;
    else return x+=(multiplicacao(x, n-1));
}
int main()
{
    int x,n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("\nDigite outro valor: ");
    scanf("%d", &x);
    printf("%d", multiplicacao(x, n));
    return 0;
}
