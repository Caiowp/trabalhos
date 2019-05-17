#include <stdio.h>
#include <stdlib.h>
int media(int v1, int v2, int v3){
    return (v1+v2+v3)/3;
}
int main()
{
    int v1,v2,v3;
    printf("Digite um valor: ");
    scanf("%d", &v1);
    printf("\nDigite um valor: ");
    scanf("%d", &v3);
    printf("\nDigite um valor: ");
    scanf("%d", &v2);

    printf("A media entre os valores eh %d", media(v1,v2,v3));
    return 0;
}
