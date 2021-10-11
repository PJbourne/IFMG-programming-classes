
#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTOS 10


typedef struct Tpilha {
    int elementos[MAX_ELEMENTOS];
    int topo;
};

struct Tpilha p;

void criaPilha(){
    p.topo = 0;
}

void empilha(int A){

     if(p.topo == MAX_ELEMENTOS-1) {
        printf("pilha cheia.");
        exit(1);
    }

    p.elementos[p.topo] = A;

    p.topo++;
}

int desempilha()
{
    if(p.topo == 0) {
        printf("pilha vazia.");
        exit(1);
    }
    p.topo--;

    return p.elementos[p.topo];
}
int tamanho()
{
    return p.topo;
}

int main()
{
  int num1, num2;

  criaPilha();

  //antes de empilhar
  printf("Tamanho antes de empilhar: %d",tamanho());

  empilha(3);
  empilha(5);
  empilha(2);
  empilha(9);

  //antes de empilhar
  printf("\nTamanho depois de empilhar: %d",tamanho());


  printf("\n Valores desempilhados: %d",desempilha());
  printf(" %d",desempilha());

    //antes de empilhar
  printf("\nTamanho depois de desempilhar: %d",tamanho());


    return 0;
}
