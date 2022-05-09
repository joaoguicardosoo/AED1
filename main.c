#include <stdio.h>
#include <stdlib.h>

int main (){
    int jogador1, jogador2, jogador3, premio, totalapostado, peso, j1recebe, j2recebe, j3recebe;

    printf("Bolao jogador 1 R$: ");
    scanf("%d", &jogador1);
    printf("Bolao jogador 2 R$: ");
    scanf("%d", &jogador2);
    printf("Bolao jogador 3 R$: ");
    scanf("%d", &jogador3);
    printf("Informe o valor do premio: ");
    scanf("%d", &premio);

    totalapostado=jogador1+jogador2+jogador3;
    peso=premio/totalapostado;
    j1recebe=jogador1*peso;
    j2recebe=jogador2*peso;
    j3recebe=jogador3*peso;

    printf("Jogador 1 recebera R$: %d\n", j1recebe);
    printf("Jogador 2 recebera R$: %d\n", j2recebe);
    printf("Jogador 3 recebera R$: %d\n", j3recebe);
return 0;
}
