#include <stdio.h>
//#include <stdlib.h>
#include <locale.h>
/*
Autor: Pablo Teodoro Monteiro
Data: 09/07/2021
Programa classifica bois até 500Kg
*/
int b, row=0, boi[10][2], boi2[10][2], maior[10], med=0, i=0, j=0, a=0, c=0, A=0, C=0;
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a quantidade de bois do lote: ");//quantidade de bois, limite é 10
    scanf("%d",&b);
    while(i<b){                      //Entrada dos dados
        printf("Digite o código do %dº boi: ",i+1);
        scanf("%d",&boi[i][row]);
        row=1;
        printf("Digite o peso do %dº boi (até 500Kg): ",i+1);
        scanf("%d",&boi[i][row]);
        if(boi[i][1]>500){              //Se boi > 500 limpa todos os dados, e volta ao ZERO
            printf("O peso limite é 500Kg. O processo foi reiniciado");
            for(j=0; j<b; j++){        //Zera todos os dados
                boi[j][0]=0;
                boi[j][1]=0;
                i=0;
            }
        }else{                         //se não tem boi>500, contiua
        row=0;
        i++;
        }
    }
    while(med==0){                   //analisa o peso
        for(i=0; i<b; i++){
        for(j=0; j<b; j++){
            if(boi[i][1] >= boi[j][1] && i!=j){  //se i>=todos, acumula em a até dar a=b-1
                a++;
            }if(boi[i][1] <= boi[j][1] && i!=j){  //se i<=todos, acumula em c até dar c=b-1
                c++;
            }
        }
        if(a == b-1){
            printf("O boi %d, que pesa %d Kg, é o mais pesado\n",boi[i][0],boi[i][1]);
            A=1;
        }else if(c == b-1){
            printf("O boi %d, que pesa %d Kg, é o mais leve\n",boi[i][0],boi[i][1]);
            C=1;
        }if(A==1 && C==1){ //quando etsiver tudo ok, seta a flag MED e finaliza
            med=1;
        }
        a=0;
        c=0;
        }
    }
}
