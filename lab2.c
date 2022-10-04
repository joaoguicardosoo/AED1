#include <stdio.h>
#include <stdlib.h>



// Exercicio 1
/* a)
void main()
{
    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa com valor 40;
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o conteúdo inicial é lixo;
    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a
    printf("%p \n", &a);
    printf("%p", p);
    return 0;
}
*/
// b)
int main()
{
    int a; // cria uma variável do tipo inteiro, chamada a, e inicializa com valor 40;
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o conteúdo inicial é lixo
    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a

    scanf ("%d", a);
    printf("%p \n", &a);
    printf("%p", p);
return 0;
}
/* Exercicio 2
void main(){
    char nome[] = "José Augusto";
    char *p;
    p = &nome;
    printf("%c", p);
}
*/
