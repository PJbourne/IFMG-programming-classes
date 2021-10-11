//1. A partir do trecho de código abaixo, complete o programa criando
//as funções que faltam.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
   int matricula;
   float notas[3];
}Aluno;

int i=0;
char n=0;

void LeAluno(Aluno *readAluno){
    printf("Digite a matrícula do aluno %d: ", i+1);
    scanf("%d", &readAluno->matricula);
    for(int j=0; j<3; j++){
        printf("Digite a nota %d do aluno: ", j+1);
        scanf("%f", &readAluno->notas[j]);
    }
}
float CalculaMediaAluno(Aluno readAluno){
    float median = 0;
        for(int j=0; j<3; j++){
            median = median + readAluno.notas[j];
        }
        median = median/3;
    return median;
}
void ImprimeTurma(Aluno *readAluno){
    for(int a=0; a<5; a++){
        printf("\nAluno: %d ", readAluno->matricula);
        for(int j=0; j<3; j++){
            printf("\nNota %d: %f ", j+1, readAluno->notas[j]);
        }
    }
}


int main()
{
    Aluno Turma[5];
    float media;
    for(i=0; i< 5; i++){
        LeAluno(&Turma[i]);
    }

    ImprimeTurma(&Turma[0]);// Função que imprime os dados de todos os alunos
    i=0;

    for(i=0; i<5; i++)
    {
        media = CalculaMediaAluno(Turma[i]);// função que calcula a média das notas de um aluno

        printf("\nAluno %d  - Media = %f",i+1,media); // imprime os dados dos alunos

    }

    i = 0;
    return 0;
}

