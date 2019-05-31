#include <stdio.h>
#include <stdlib.h>
int soma(int *v1, int *v2){
    int soma;
    soma=*v1+*v2;
    return soma;
}
int main()
{
    int n1, n2;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("\nDigite outro valor: ");
    scanf("%d", &n2);
    printf("\nA soma eh: %d", soma(&n1, &n2));
    return 0;
}
