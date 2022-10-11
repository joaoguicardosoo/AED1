#include<stdio.h>

#define  MAX  10    // tamanho maximo do vetor

// Declaracao da estrutura de dados
struct vetor {
    int elem[MAX];  // armazena os dados do vetor
    int tam;        // armazena o tamanho do vetor
};

// Definicao do tipo Vetor a partir da estrutura de dados
typedef struct vetor Vetor;

/*
 * Retorna o maior elemento do vetor
 */
int maior_v1(Vetor vet, int *erro)
{
    int i, m = -1;

    // tratamento de erro
    /* opções:
        2 - usar parametro auxiliar para erro
    */

    if (vet.tam == 0) *erro = 1;
    else {
        m = vet.elem[0];

        for (i = 1; i < vet.tam; i++)
            if (vet.elem[i] > m) m = vet.elem[i];
    }

    return m;
}

int maior(Vetor vet, int *m)
{
    int i;

    // tratamento de erro
    /* opções:
        1 - retornar um codigo de erro
            (0 se funcionou, 1 caso contrario)
    */

    if (vet.tam == 0) return 1;

    *m = vet.elem[0];
    for (i = 1; i < vet.tam; i++)
   	 if (vet.elem[i] > *m) *m = vet.elem[i];

    return 0;
}

int criar(Vetor *vet)
{
    vet->tam = 0;

    return 0; // nao tem erro
}

// Insere o valor x no vetor vet
int inserir(Vetor *vet, int x)
{
    int i;

    if (vet->tam >= MAX) return 1; // erro
    i = vet->tam;
    vet->elem[i] = x;
    vet->tam++;
    return 0; // nao tem erro


    // alternativamente
    // vet->elem[vet->tam++] = x;
}


int main (){
    Vetor v1;
    int x;
    printf("Digite o um valor para inserir no vetor: ");
    scanf("%d", &x);
    int inserir(v1, x);





return 0;
}
