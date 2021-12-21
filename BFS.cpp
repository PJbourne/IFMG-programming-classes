#include <iostream>
#define tam 5

int **cria_grafo(int v);
int inserir_a(int **g);
int busca(int **g);

int main(){
    int nV = tam, vertices[tam];
    int Grafo[nV][nV];
    Grafo[nV][nV] = **cria_grafo(nV);
    busca(Grafo);
}

int busca(int **g){
}

int **cria_grafo(int v){
    int **grafo;
    grafo = **malloc (v * sizeof(int*));
    for(int i=0; i<v; i++){
        grafo[i] = **malloc (v * sizeof(int));
    }
    **grafo = inserir_a(**grafo);
    return **grafo;
}

int inserir_a(int **g){
    int n, org, dst;
    std::cout << "Quantas arestas deseja inserir? ";
    std::cin >> n;
    for(n=0; n>0; n--){
        std::cout << "Digite o vertice origem e o vertice destino: ";
        std::cin >> org >> dst;
        g[org][dst] = 1;
    }
    return **g;
}

void remover_a(int **g){
    int n, org, dst;
    std::cout << "Quantas arestas deseja remover? ";
    std::cin >> n;
    for(n=0; n>0; n--){
        std::cout << "Digite o vertice origem e o vertice destino: ";
        std::cin >> org >> dst;
        g[org][dst] = 0;
    }
}
