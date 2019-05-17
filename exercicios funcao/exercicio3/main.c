#include <stdio.h>
#include <stdlib.h>
int menorvalor(int v1, int v2, int v3, int v4){
    if ((v1<v2)&&(v1<v3)&&(v1<v4)){
        return v1;
    }else  if ((v2<v1)&&(v2<v3)&&(v2<v4)){
        return v2;
    }else if ((v3<v2)&&(v3<v1)&&(v3<v4)){
        return v3;
    }else return v4;
}

int main()
{
    int v1,v2,v3,v4;
    printf("Digite um valor: ");
    scanf("%d", &v1);
    printf("\nDigite um valor: ");
    scanf("%d", &v2);
    printf("\nDigite um valor: ");
    scanf("%d", &v3);
    printf("\nDigite um valor: ");
    scanf("%d", &v4);
    printf("\n O menor valor eh %d", menorvalor(v1,v2,v3,v4));
    return 0;
}
