#include <stdio.h>
    /*
    Autor: Pablo T. Monteiro
    Data: 06/07/2021
    */
    int n=0, Ntotal;
    char bankData[3][40];

	void main() {
		printf("Quantos participantes? Obs.: Capacidade máxima de 40\nO competidor precisa ter mais de 5 anos de idade\n");
		scanf("%c",Ntotal);
		while(n != Ntotal){
		    printf("Nome do(a) nadador(a): ");
		    scanf("%c",bankData[2][n]);
		    printf("Idade: ");
		    scanf("%c",bankData[1][n]);
		    n=n+1;
		}
		n=0;
		while(n!=Ntotal){
		    printf(bankData[1][n]," | ", bankData[2][n], "\n");
		    n=n+1;
		}

		for(n=0; n<Ntotal;n++){
		    if(bankData[1][n]=="05" || bankData[1][n]=="06" || bankData[1][n]=="07" || bankData[1][n]=="5" || bankData[1][n]=="6" || bankData[1][n]=="7"){
		        bankData[0][n] = "Infantil A";
		    }else if(bankData[1][n]=="08" || bankData[1][n]=="09" || bankData[1][n]=="10"){
		        bankData[0][n] = "Infantil B";
		    }else if(bankData[1][n]=="11" || bankData[1][n]=="12" || bankData[1][n]=="13"){
		        bankData[0][n] = " Juvenil A";
		    }else if(bankData[1][n]=="14" || bankData[1][n]=="15" || bankData[1][n]=="16" || bankData[1][n]=="17"){
		        bankData[0][n] = " Juvenil B";
		    }else{
		        bankData[0][n] = "  Adulto  ";
		    }
		}
		n=0;
		printf("Categoria, Idade, Nome\n");
		while(n!=Ntotal){
		    printf(bankData[0][n]," | ",bankData[1][n]," | ", bankData[2][n], "\n");
		    n=n+1;
		}
	}
