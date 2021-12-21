/*
Aluno: Pablo Teodoro Monteiro
Disciplina: Programacao e Estrutura de Dados II
Engenharia de Controle e Automacao
*/

#include <iostream>
#include <locale.h>

struct aluno{    //--------------------Declara o STRUCT aluno
    long int mat;
    char nome[81];
    char email[41];
};//-------------------total de 128 Kb

typedef struct aluno Aluno;   //------------Declera Aluno do tipo STRUCT

//--------------------------------------------------------------------------------------------------------------------------------

void funcao_hash(int *x){         //----------função com parametro 'int matricula' que faz referencia ao 'int a'
    int valor;
    valor = *x - 523500;    //A ideia e que o digito 052 refere ao ano 2021 e o 35 a turma ECA
                                        //valor vai receber um valor limitado de 0 a 99. Se for maior ou menor, a matricula nao pertence a um aluno de ECA do ano 2021
    if((valor >= 0) && (valor <= 99)){
        *x=(valor);                   //retorna os dois ultimos digitos: 052-35-00 a 052-35-99. Ou seja, retorna de 0 a 99
    }
    else{
        *x=(-1);
    }
    return;
}
//--------------------------------------------------------------------------------------------------------------------------------

int main(){
    setlocale(LC_ALL, "Portuguese");//---------Adequacao ao alfabeto portugues
    Aluno A;
    int a;
    std::cout << "Digite a matricula (nº de 7 digitos): ";
    std::cin >> a;
    funcao_hash(&a);
    if(a < 0) std::cout << "Não pertence a turma Engenharia de Controle e Automação 2021";
    else std::cout << "Aluno número: " << a;

    return 0;
}

/*
OBS.: Tentei implementar uma tabela hash e o retorno dos dados do aluno quando a chave de entrada esta correta
mas nao consegui. Alguns erros relativos a parametros, ponteiros e struct que eu nao entendi como contornar

Aluno *tabAlunos[100]; //-----Declara uma posição em memoria, chamada tabAlunos que tem tamanho 100-1. Ou seja, ate 99 alunos

typedef struct hash dados(*tab){
    tab[1].mat = 0523501;
    tab[1].nome = "Pablo Teodoro Monteiro";
    tab[1].email = "musicbass.3107@gmail.com";
}

*/
