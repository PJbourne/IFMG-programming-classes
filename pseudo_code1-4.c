#include <stdio.h>
/*
Autor: Pablo T. Monteiro
Data: 06/07/2021
*/
int age;
void main() {
    printf("Qual a sua idade? ");
    scanf("%d",&age);
    if(age>=16){
        if(age<18){
            printf("Voce pode emitir CNH e e obrigado a votar nas proximas eleicoes\n");
        }if(age>=18){
            printf("Voce pode votar se quiser, mas ainda nao pode emitir CNH\n");
        }
    }else{
        printf("Voce nao pode nem emitir CNH, nem votar\n");
    }
}
