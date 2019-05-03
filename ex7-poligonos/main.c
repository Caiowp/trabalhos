#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdlados;
    printf("Digite a quantidade de lados: ");
    scanf("%d", &qtdlados);
    printf("\nO valor de cada angulo interno eh %d graus e possui %d diagonais", (((qtdlados-2)*180)/qtdlados), ((qtdlados*(qtdlados-3))/2));
    return 0;
}
