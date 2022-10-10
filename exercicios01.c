#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct ponto{  // Declara struct para armazenar as coordenadas do ponto.
  int x;
  int y;
};

typedef struct ponto Coordenadas; // Cria o tipo de struct como Coordenadas para facilitar a leitura e escrita.


Coordenadas pontoP(int x, int y){  // Cria o ponto P com as coordenadas de entrada.
    Coordenadas coord1;
    coord1.x = x;
    coord1.y = y;
    return coord1;
}

int Distancia(Coordenadas coord1, Coordenadas coord2){
    float distancia = 0;
    distancia = sqrt()
    
    
    
}
int main() {
    int x, y;
    Coordenadas coord1;
    Coordenadas coord2;
    printf("Digite as coordenadas de X e Y separadas por espaco: ");
    scanf("%d %d", &x, &y);
    coord1 = pontoP(x, y);
    print("%d %d", coord1.x, coord1.y);
    
    
    
    return 0;
}
