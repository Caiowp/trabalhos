#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct aluno {
    int faltas;
    char nome[30];
    float media;
}aluno;

aluno *alocaaluno(n){
    aluno *ptraluno=calloc(n, sizeof(aluno));
    return ptraluno;
}

void aluno_preencher( aluno * ptraluno, int faltas, char * nome, float media)
{
    ptraluno->faltas = faltas;
    strncpy( ptraluno->nome, nome, 30 );
    ptraluno->media = media;
}
void ordenaaluno(int n, aluno *ptraluno){
    int i, j;
    aluno aux;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
           if((ptraluno[i].media)<(ptraluno[j].media)){
                aux=ptraluno[i];
                ptraluno[i]=ptraluno[j];
                ptraluno[j]=aux;
           }

        }
    }
}
void aluno_informa(int n, aluno *ptraluno){
    int i, faltas;;
    char nome[30];
    float media;
    for(i=0;i<3;i++){
        printf("\nDigite o nome: ");
        scanf("%s", &nome);
        printf("\nDigite a media: ");
        scanf("%f", &media);
        printf("\nDigite as faltas: ");
        scanf("%d", &faltas);

        aluno_preencher(&ptraluno[i], faltas, &nome, media);
    }
}

void imprime_alunos(int n, aluno *ptraluno){
    int i;
    for(i=0;i<n;i++){
        printf("\n\n%dº aluno:\n\n", i+1);
        printf("Nome: %s", ptraluno[i].nome);
        printf("\nMedia: %.2f", ptraluno[i].media);
        printf("\nFaltas: %d", ptraluno[i].faltas);
    }
}

int main( int argc, char * argv[] )
{
    /* Cria array de carros */
    int n;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    aluno * ptraluno = alocaaluno(n);
    aluno_informa(n, ptraluno);
    ordenaaluno(n, ptraluno);
    /* Preenche os dados de cada Carro na array */



    imprime_alunos(n, ptraluno);
    /* Libera array de carros */
    free(ptraluno);
    return 0;
}
