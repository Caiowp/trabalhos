#include <stdio.h>
#include <stdlib.h>

void TorredeHanoi(int discos, char origem, char destino, char aux){
    if(discos==1){
        printf("Mover disco %d de %c", discos, origem);
        printf(" para %c\n", destino);
    }else{
        TorredeHanoi(discos-1, origem, aux, destino);
        printf("Mover disco %d de %c", discos, origem);
        printf(" para %c\n", destino);
        TorredeHanoi(discos-1, aux, destino, origem);
    }
}

int main()
{
  int discos;
  printf("Digite a quantidade de discos: ");
  scanf("%d", &discos);
  printf("\n\n");
  TorredeHanoi(discos, 'A', 'C', 'B');
}
