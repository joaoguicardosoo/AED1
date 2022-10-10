// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct ponto{
  int x;
  int y;
};

typedef struct ponto Coordenadas;


Coordenadas pontoP(int x, int y){
    Coordenadas coord1;
    coord1.x = x;
    coord1.y = y;
    return coord1;
}


int main() {
    int x, y;
    Coordenadas coord1;
    Coordenadas coord2;
    printf("Digite as coordenadas de X e Y separadas por espaco: ");
    scanf("%d %d", &x, &y);
    coord1 = pontoP(x, y);
    
    
    
    return 0;
}
