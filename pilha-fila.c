#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTOS 10

typedef struct Tfila {
    int elementos[MAX_ELEMENTOS];
    int primeiro;
    int ultimo;
};

struct Tfila f;

void criaFila(){
    f.ultimo = 1;
    f.primeiro = 0;
}

void emfila(int A){
     if(f.ultimo == MAX_ELEMENTOS) {
        printf("fila cheia.");
        exit(1);
    }
    f.elementos[f.ultimo] = A;
    f.ultimo++;
}

int desemfila(){
    if(f.ultimo == 1) {
        printf("fila vazia.");
        exit(1);
    }
    f.primeiro++;
    return f.elementos[f.primeiro];
}

int tamanho(){
    return f.ultimo-1;
}

int main(){
  int num1, num2;
  criaFila();
  //antes de empilhar
  printf("Tamanho antes de enfilar: %d",tamanho());
  emfila(3);
  emfila(5);
  emfila(2);
  emfila(9);
  //antes de empilhar
  printf("\nTamanho depois de empilhar: %d",tamanho());
  printf("\n Valores desempilhados: %d",desemfila());
  printf(" %d",desemfila());
    //antes de empilhar
  printf("\nTamanho depois de desempilhar: %d",tamanho());
    return 0;
}
