#include <stdio.h>
#include <stdlib.h>
int* maiorvalor(int *v1, int *v2){
    if(*v1>*v2){
        return *v1;
    }else return *v2;
}
int main()
{
    int v1,v2;
    printf("Digite um valor: ");
    scanf("%d", &v1);
    printf("\nDigite outro valor: ");
    scanf("%d", &v2);
    printf("\nO maior valor eh %d", maiorvalor(&v1, &v2));
    return 0;
}
