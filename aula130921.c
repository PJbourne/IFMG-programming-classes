/*
Aluno: Pablo Teodoro Monteiro
Aula: 13/09/2021
Programação e Estrutura de Dados II

Cógigo de cadastro, utilizando 'Struct' e 'Pointer'

OBS.: Código feito para Linux
        Comandos incompativeis:
        Para limpar buffer do scnaf         __fpurge - linux
                                            fflush   - windows
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{     //struct para dados de endereço
    char street[50];
    char neigh[30];
    char city[30];
    char state[3];
    int numb;
}endereco;

typedef struct{     //struct para dados pessoais
    char numUSP[12];
    char name[30];
    char sexo;
    float renda;
    endereco adAluno;
}aluno;
//Declaração das funções do programa

//funções
void cadastro(aluno *AlunoCad){
    __fpurge(stdin);
    printf("\nEntre com o numero USP: ");
    scanf("%^\ns", AlunoCad->numUSP);
    __fpurge(stdin);

    printf("\nEntre com o nome: ");
    scanf("%^\ns", AlunoCad->name);
    __fpurge(stdin);

    printf("\nEntre com o sexo(M/F): ");
    scanf("%\nc", &AlunoCad->sexo);
    __fpurge(stdin);

    printf("\nEntre com a renda familiar: ");
    scanf("%\nf", &AlunoCad->renda);
    __fpurge(stdin);

    printf("\nEntre com a rua: ");
    scanf("%^\ns", AlunoCad->adAluno.street);
    __fpurge(stdin);

    printf("\nEntre com o bairro: ");
    scanf("%^\ns", AlunoCad->adAluno.neigh);
    __fpurge(stdin);

    printf("\nEntre com a cidade: ");
    scanf("%^\ns", AlunoCad->adAluno.city);
    __fpurge(stdin);

    printf("\nEntre com o estado: ");
    scanf("%^\ns", AlunoCad->adAluno.state);
    __fpurge(stdin);

    printf("\nEntre com o numero: ");
    scanf("%\nd", &AlunoCad->adAluno.numb);
    __fpurge(stdin);
}

void print(aluno Aluno){

    printf("\nNumero Matrícula: %s", Aluno.numUSP);

    printf("\nNome: %s", Aluno.name);

    printf("\nSexo(M/F): %c", Aluno.sexo);

    printf("\nRenda familiar: %.2f", Aluno.renda);

    printf("\nRua: %s", Aluno.adAluno.street);

    printf("\nBairro: %s", Aluno.adAluno.neigh);

    printf("\nCidade: %s", Aluno.adAluno.city);

    printf("\nEstado: %s", Aluno.adAluno.state);

    printf("\nNumero: %d\n\n", Aluno.adAluno.numb);

}
//Função principal
int main(){
    int opt, i=0, j=0;                                            //variaveis de uso
    aluno Student[5];                                           //variavel armazenar dados (vetor de structs)
    printf("Bem vindo ao sistema de cadastro de alunos\n");     //mensagem de bem vindo no iniciar
    while(i==0){                                                //Loop do Menu principal
        printf("Por favor, digite uma opcao:\n");
        printf("1 - cadastro\n2 - consulta\n3 - SAIR\n");
        scanf("%d",&opt);
        if(opt==1){                                             //Opção menu 1 cadastrar
            char opc;
            cadastro(Student[j]);                              //call function cadastro
            printf("\n\nDeseja visualizar o cadastro?(S|N) \n");
            scanf("%c",&opc);
            if(opc=='S' || opc=='s'){                           //se desejar ver o ultimo cadastro
                system("clear");
                print(Student[j]);                              //call function print
            }else{
                system("clear");
            }
            opt=opc=0;
        }else if(opt==2){                                       //Opção menu 2 - consulta os cadastros efetuados
            system("clear");
            for(int a=0; a<j; a++){
                print(Student[a]);                              //call function print para cada struct do vetor 'Student'
            }
            system("pause");
            system("clear");
            opt=0;
        }else if(opt==3){                                       //Opção menu 3 - para finalizar o programa
            i=1;
            opt=0;
        }
        j++;                                                    //incremento para a posição do novo cadastro no vetor student
    }
    return 0;
}
