#include <stdio.h>
#include <stdlib.h>
int somatorio(int n){
    if (n==1){
        return 1;
    }else{
        n+=somatorio(n-1);
        return n;
    }
}
int main()
{
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("%d", somatorio(n));
    return 0;
}
