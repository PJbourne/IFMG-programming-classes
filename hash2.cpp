/*
Autor: Pablo Teodoro Monteiro (adaptado de https://www.youtube.com/watch?v=9OI7h14jN0Y por Wagner Gaspar)
Tabela HASH linear em c++
*/

#include <iostream>
#define U 50        //------------------------------------definir tamanho da tabela hash 50--------------------------------------------

struct aluno{
    int mat;
    char nome[80];
    char email[40];
};
//------------------------------------declara tabela hash tamanho U--------------------------------------------
aluno tabHash[U];

//----------------------------------inicializa tabela com codigo -1------------------------------
void initTab(){
    for(int i=0; i<U; i++){
        tabHash[i].mat = -1;
    }
}
//------------------------------------funcao hash--------------------------------------------
int criaHash(int key){
    return key % 10;
}
//-----------------------------------funcao entrada de dados--------------------------------------------
aluno lerAluno(){
    aluno A;
    std::cout << "Digite a matricula: ";
    std::cin >> A.mat;
    fflush(stdin);
    std::cout << "Digite o nome: ";
    std::cin >> A.nome;
    fflush(stdin);
    std::cout << "Digite o email: ";
    std::cin >> A.email;
    fflush(stdin);
    return A;
}
//------------------------------------funcao inserir na tabela--------------------------------------------
void inserir(){
    aluno Aluno = lerAluno();
    int indice = criaHash(Aluno.mat);
    while( (tabHash[indice].mat)!=(-1)){
        indice = criaHash(indice+1);
    }
    tabHash[indice] = Aluno;
}
//------------------------------------funcao busca na tabela--------------------------------------------
aluno* busca(int key){
    int indice = criaHash(key);
    while(tabHash[indice].mat != -1){
        if(tabHash[indice].mat == key){
            return  &tabHash[indice];
        }else{
            indice = criaHash(indice+1);
        }
    }
    return NULL;
}
//------------------------------------mostrar a tabela hash--------------------------------------------
void print(){
    std::cout <<  "---------------------------TABELA-------------------------";
    for(int i=0; i<U; i++){
        if(tabHash[i].mat != -1){
            std::cout << i << "  " << tabHash[i].mat << "  " << tabHash[i].nome << std::endl;
        }else{
            std::cout << i << std::endl;
        }
    }
}
//------------------------------------main--------------------------------------------
int main(){
    int op, key;
    aluno *a;//----------------------ponteiro do struct para usar no switch-case---------------------------------
    initTab();
    do{
        std::cout << "1 - Inserir\n" << "2 - Buscar\n" << "3 - Imprimir\n";
        std::cin >> op;
        switch(op){//-----------------------------switch opcoes---------------------------------------------------
        case 0:
            std::cout << "Saindo...";
        break;
        case 1:
            inserir();
        break;
        case 2:
            std::cout << "Digite a matricula: ";
            std::cin >> key;
            a = busca(key);
            if(a){
                std::cout << "Matricula: " << a->mat << "Nome: " << a->nome << std::endl;
            }else{
                std::cout << "Matricula não encontrada";
            }
        break;
        case 3:
            print();
        break;
        default:
            std::cout << "Entrada inválida";
        break;
        }

    }while(op!=0);
}
