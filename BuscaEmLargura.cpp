/*
Autor: Pablo Teodoro Monteiro
Grafos e Automatos
Busca em Largura (BFS)
*/

#include <iostream>
#define tamanho 4

int mj[tamanho][tamanho] = {{0,1,1,0},
                            {1,0,0,1},
                            {1,0,0,0},
                            {0,1,0,0},
                            };




/*
int mj[tamanho][tamanho] = {{0,1,0,0,0,1,0,0},
                            {1,0,0,0,1,0,0,0},
                            {0,0,0,1,0,1,1,0},
                            {0,0,1,0,0,0,1,1},
                            {0,1,0,0,0,0,0,0},
                            {1,0,1,0,0,0,1,0},
                            {0,0,1,1,0,1,0,1},
                            {0,0,0,1,0,0,1,0}
                            };
*/
int main(){
    int lista[tamanho], vetor[tamanho], s = 1, c = 0, v = 0, visitando;
    bool conhecido = false;
    lista[c]=s;
    for(int i = 0; i<tamanho; i++){
        vetor[i] = -1;
    }
    while(*(lista) != 0){                   //enquanto lista possui valor
        visitando = lista[0];               //define qual vertice esta sendo explorado

        for(int i=0; i<tamanho; i++){
            for(int j=0; j<tamanho; j++){   // saber se mj[tamanho][i] ja foi visitado

                if(vetor[j] == i){       //verificar se conhece ou nao o vertice
                    conhecido = true;
                    j = tamanho;
                }else{
                    conhecido = false;
                }
            }
                                            //
            if(mj[visitando][i] != 0 & !conhecido){//Se 'i' tem conexao com o explorado e nao é conhecido
                c++;
                *(lista + c) = i;                        //'i' adicionado a lista de explorados
            }
            vetor[v]=lista[0];
            //std::cout << "Lista " << lista[c] << " fim lista" << std::endl;
            //std::cout << "Vetor " << vetor[v] << " fim vetor" << std::endl;
            v++;
        }

        for(int i = 0; i<tamanho; i++){             //movimenta os valores da lista
            if(i==tamanho){
                lista[tamanho]=0;
            }else{
                lista[i]=lista[i+1];
            }
        }
        c--;
    }
    for(int i=0;i<tamanho;i++){
        std::cout << vetor[i] << "  ";
    }
    return 0;
}
