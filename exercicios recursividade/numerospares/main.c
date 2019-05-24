#include <stdio.h>
#include <stdlib.h>
void numerospares(int n){
    if(n>=0){
        if(n%2==0){
            printf(" %d", n);
        }
        numerospares(n-1);
    }
}
int main()
{
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("\nOs numeros pares ate %d sao: \n\n", n);
    numerospares(n);
    return 0;
}
