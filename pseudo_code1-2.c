#include <stdio.h>
/*
Autor: Pablo T. Monteiro
Data: 06/07/2021
*/
int a, b, c;
void main(){
    printf("Insira o 1o valor: ");
    scanf("%d", &a);
    printf("Insira o 2o valor: ");
    scanf("%d", &b);
    printf("Insira o 3o valor: ");
    scanf("%d", &c);
    if(a+b>c && b+c>a && a+c>b){
        if(a==b || a==c || b==c){
            if(a==b && b==c){
                printf("Trangulo equilatero\n");
            }else{
                printf("Triangulo Isocelis\n");
            }
        }else if(a!=b && b!=c){
            printf("Triangulo escaleno");
        }
    }else{
        printf("Os valores nao compoem um triangulo");
    }
}
