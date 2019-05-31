#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[100];
    int tam, i;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    tam=strlen(palavra);
    printf("\nPalavra invertida: ");
    for(i=tam;i>=0;i--){
        printf("%c", *(palavra+i));
    }
    return 0;
}
