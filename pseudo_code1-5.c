#include <stdio.h>
/*
Autor: Pablo T. Monteiro
Data: 06/07/2021
*/
float cons, tanq, km, kmM, abas, reser = 5, gast = 100;
int A = 0;

void main() {
    printf("Este programa foi desenvolvedo originalmente seguindo a ideia do fluxograma\nComo o meu fluxograma foi exageramanete avancado, dei uma aleatoriedade a este daqui, deixando-o mais 'realista'\n\nRecomendo valores realistas, por exemplo, para um consumo de 10km/l, \ndesde o ultimo abastecimento, seria logico a cada 1 Litro, andou aprox 10Km\n\n");
    printf("Entre com a capacidade do tanque em Litros: ");
    scanf("%s",&tanq);
    printf("Entre com os Km percorridos: ");
    scanf("%s",&km);
    printf("Entre com a quantidade do ultimo abastecimento: ");
    scanf("%s",&abas);
    A = 0;
    float m = 0;
    while(A == 0){       //Este parte destina-se a simular um desempenho em relação a capacidade do tanque
        gast = gast - 0.1;
        if(gast < reser){
            A = 1;
            m=m+0.8;
        }
        m=m+0.8;
    }
    kmM = (tanq+m)*(tanq+m)/((m*tanq)*0.2);
    cons = km / abas;
    printf("\nO consumo foi de %s",cons,"Km/L");
    printf("\nA autonomia do carro é de %s",kmM,"Km/h");
    if(kmM < 60){
        printf("\nAlto consumo, reomendável revisar o carro");
    }else if(kmM >= 60 || kmM <= 100){
        printf("\nConsumo comum ou ótimo");
    }else{
        printf("\nO consumo surpreendeu");
    }
}
