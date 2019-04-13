#include <stdio.h>
#include <stdlib.h>

int main()
{
    int QtdBanana,QtdPessego, QtdUva;
    float PrecoBanana, PrecoPessego, PrecoUva;
    printf("Quantidade de banana:");
    scanf("%d", &QtdBanana);
    printf("\nPreco da banana(unitario):");
    scanf("%f", &PrecoBanana);
    printf("\nQuantidade de pessego:");
    scanf("%d", &QtdPessego);
    printf("\nPreco do pessego(unitario):");
    scanf("%f", &PrecoPessego);
    printf("\nQuantidade de uva:");
    scanf("%d", &QtdUva);
    printf("\nPreco da uva(unitario):");
    scanf("%f", &PrecoUva);
    printf("\n\n\nProduto | Preco Unitario | Quantidade | Preco Total\n");
    printf("Banana  | R$ %11.2f | %11d | R$ %5.2f\n", PrecoBanana, QtdBanana, PrecoBanana*QtdBanana);
    printf("Pessego | R$ %11.2f | %11d | R$ %5.2f\n", PrecoPessego, QtdPessego, PrecoPessego*QtdPessego);
    printf("Uva     | R$ %11.2f | %11d | R$ %5.2f\n", PrecoUva, QtdUva, PrecoUva*QtdUva);
    printf("        |                | Sub-total   | R$ %5.2f\n", PrecoBanana*QtdBanana+PrecoPessego*QtdPessego+PrecoUva*QtdUva);
    printf("        | Impostos(5%)                 | R$ %5.2f\n", 0.05*(PrecoBanana*QtdBanana+PrecoPessego*QtdPessego+PrecoUva*QtdUva));
    printf("        |                | Total       | R$ %5.2f\n", PrecoBanana*QtdBanana+PrecoPessego*QtdPessego+PrecoUva*QtdUva+0.05*(PrecoBanana*QtdBanana+PrecoPessego*QtdPessego+PrecoUva*QtdUva));
    return 0;
}
