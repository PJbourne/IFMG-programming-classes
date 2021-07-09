#include <stdio.h>
    /*
    Autor: Pablo T. Monteiro
    Data: 06/07/2021
    */
int main() {
    int n1, n2, n3;
    printf("Insira o 1o numero: ");
    scanf("%d", &n1);
    printf("\nInsira o 2o numero: ");
    scanf("%d", &n2);
    printf("\nInsira o 3o numero: ");
    scanf("%d", &n3);
    printf("\n");
    if(n1>n2 && n1>n3){
        if(n2>n3){
            printf("%d %d %d ",n1,n2,n3);
        }else{
            printf("%d %d %d",n1,n3,n2);
        }

    }else if(n2>n1 && n2>n3){
        if(n1>n3){
            printf("%d %d %d",n2,n1,n3);
        }else{
            printf("%d %d %d",n2,n3,n1);
        }
    }else if(n3>n1 && n3>n2){
        if(n1>n2){
            printf("%d %d %d",n3,n1,n2);
        }else{
            printf("%d %d %d",n3,n2,n1);
        }
        //seção adicionada para sanar quando n1=n2 ou n2=n3 ou n1=n3
    }else if(n1==n2){
        if(n3>n1){
            printf("%d %d %d",n3,n2,n1);
        }else{
            printf("%d %d %d",n1,n2,n3);
        }
    }else if(n1==n3){
         if(n2>n1){
            printf("%d %d %d",n2,n3,n1);
        }else{
            printf("%d %d %d",n1,n3,n2);
        }
    }else if(n3==n2){
         if(n1<n2){
            printf("%d %d %d",n3,n2,n1);
        }else{
            printf("%d %d %d",n1,n2,n3);
        }
    }
    return 0;
}

