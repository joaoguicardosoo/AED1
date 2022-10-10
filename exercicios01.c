#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct ponto{  // Declara struct para armazenar as coordenadas do ponto.
  int x;
  int y;
};

typedef struct ponto Coordenadas; // Cria o tipo de struct como Coordenadas para facilitar a leitura e escrita.


Coordenadas pontoP(int x, int y){  // Cria o ponto P com as coordenadas de entrada.
    Coordenadas coord;
    coord.x = x;
    coord.y = y;
    return coord;
}

float Distancia(Coordenadas coord1, Coordenadas coord2){
    float distancia = 0;
    distancia = sqrt((coord2.x - coord1.x)+(coord2.y - coord1.y));
    return distancia;
}
int main() {
    int x, y;
    Coordenadas coord1;
    Coordenadas coord2;
    float distancia1e2;
    printf("Digite as coordenadas de X e Y separadas por espaco: ");
    scanf("%d %d", &x, &y);
    coord1 = pontoP(x, y);
    print("Ponto 1: X = %d Y = %d", coord1.x, coord1.y);
    printf("Digite as coordenadas do segundo ponto separadas por espaco: ");
    scanf("%d %d", &x, &y);
    coord2 = pontoP(x, y);
    distancia1e2 = Distancia(coord1, coord2);
    print("Distancia entre os dois pontos: %f", distancia1e2);
    
    
    return 0;
}
