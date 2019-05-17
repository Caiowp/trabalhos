#include <stdio.h>
#include <stdlib.h>
void ordena(int* n){
    int i, j, aux, media[1];
    for (i=0; i<3;i++){
        for(j=i+1; j<3;j++){
            if(n[j]>n[i]){
                aux=n[j];
                n[j]=n[i];
                n[i]=aux;
            }
        }
    }
}

int main()
{
    float notas[2];
    printf("Digite a primeira nota: ");
    scanf("%f", &notas[0]);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &notas[1]);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &notas[2]);

    ordena(notas);

    printf("\nA maior nota eh %.2f", notas[0]);
    printf("\nA menor nota eh %.2f", notas[2]);
    printf("\nA media das notas eh %.2f", (notas[0]+notas[1]+notas[2])/3);
    printf("\nA media das duas maiores notas eh %.2f", (notas[0]+notas[1])/2);
    return 0;
}
