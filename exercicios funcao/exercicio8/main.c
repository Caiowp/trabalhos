#include <stdio.h>
#include <stdlib.h>
float opcao(float total, int opcao){
    int juros;
    switch(opcao){
        case 1:
            total=total*0.9;
            break;
        case 2:
            total=total/2;
            break;
        case 3:
            total=(total/10)+(total*0.03);
            break;
    }
    return total;
}

int main()
{
    int opcaoescolhida;
    float total;
    printf("Digite o valor total: ");
    scanf("%f", &total);
    while (1==1){
        printf("\nDigite a opcao(1,2,3): ");
        scanf("%d", &opcaoescolhida);
        if(opcaoescolhida==1||opcaoescolhida==2||opcaoescolhida==3) break;
        else printf("\nValor invalido");
    }
    printf("\nO valor da prestacao eh R$%.2f", opcao(total, opcaoescolhida));
    return 0;
}
