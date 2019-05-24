#include <stdio.h>
#include <stdlib.h>
float retornaS(int n){
    int i;
    float S=0;
    for(i=1;i<=n;i++){
        S+=(float)1/i;
    }
    return S;

}
int main()
{
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("\nO resultado eh %.2f", retornaS(n));
    return 0;
}
