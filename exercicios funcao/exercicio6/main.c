#include <stdio.h>
#include <stdlib.h>
int potencia(int base, int expoente){
    if (expoente>1){
        return base*potencia(base, expoente-1);
    }else{
        return base;
    }
}
int main()
{
    int base, expoente;
    printf("Digite um valor: ");
    scanf("%d", &base);
    printf("\nDigite a potencia: ");
    scanf("%d", &expoente);
    printf("\nO resultado eh %d", potencia(base, expoente));
    return 0;
}
