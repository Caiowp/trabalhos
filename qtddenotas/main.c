#include <stdio.h>46
#include <stdlib.h>
int divinteira(int val, int ind){
    int cont=0, flag=0;
    if (val<0){
        val-=2*val;
        flag=1;
    }
    while (ind<=val){
        val=val-ind;
        cont++;
    };
    if (flag) cont-=2*cont;
    return cont;
}
int main()
{
    int valor, nota100, nota50, nota10, nota5, nota1;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    nota100=(divinteira(valor, 100));
    nota50=divinteira((valor-nota100*100), 50);
    nota10=divinteira(((valor-nota100*100)-nota50*50), 10);
    nota1=divinteira((((valor-nota100*100)-nota50*50)-nota10*10), 1);
    printf("\nNotas de 100: %d\nNotas de 50: %d\nNotas de 10: %d\nNotas de 1: %d", nota100, nota50,nota10,nota1);

    return 0;
}
