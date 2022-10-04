/* Implementacao do TAD para numeros racionais  N/D */


#include <stdio.h>
#include <stdlib.h>


// Define a struct para armazanenar o numero Racional

struct racional{
    int numerador;
    int denominador;
};
typedef struct racional Racional;


Racional cria(int num, int den){
    Racional r;
    r.numerador = num;
    r.denominador = den;

    return r;
}

// Funcao para multiplicar os numeros racionais
Racional multiplica(Racional r1, Racional r2){
    Racional m;
    m.numerador = r1.numerador*r2.numerador;
    m.denominador = r1.denominador*r2.denominador;
    return m;
}


int main()
{
    Racional r1, r2, r3;
    int num, den;

    printf("r1.n r1.d r2.n r2.d \n");
    scanf("%d %d %d %d", &r1.numerador, &r1.denominador, &r2.numerador, &r2.denominador);

    r3 = multiplica(r1, r2);  // Chama a funcao
    printf("O resultado eh: %d/%d \n", r3.numerador, r3.denominador);

    return 0;
}
