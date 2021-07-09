programa {
    /*
    Autor: Pablo Teodoro Monteiro
    Data: 23/06/2021
    Programa classifica bois até 500Kg
    */
    inteiro b, row=0, boi[10][2], boi2[10][2], maior[10], med=0, i=0, j=0, a=0, c=0, A=0, C=0
	funcao inicio() {
	    escreva("Digite a quantidade de bois do lote: ")//quantidade de bois, limite é 10
	    leia(b)
	    enquanto(i<b){                      //Entrada dos dados
	        escreva("Digite o código do ",i+1,"º boi: ")
	        leia(boi[i][row])
	        row=1
	        escreva("Digite o peso do ",i+1,"º boi (até 500Kg): ")
	        leia(boi[i][row])
	        se(boi[i][1]>500){              //Se boi > 500 limpa todos os dados, e volta ao ZERO
	            limpa()
	            escreva("O peso limite é 500Kg. O processo foi reiniciado")
	            para(j=0; j<b; j++){        //Zera todos os dados
	                boi[j][0]=0
	                boi[j][1]=0
	                i=0
	            }
	        }senao{                         //se não tem boi>500, contiua
	        row=0
	        i++
	        }
	    }
	    enquanto(med==0){                   //analisa o peso
	        para(i=0; i<b; i++){
	        para(j=0; j<b; j++){
	            se(boi[i][1] >= boi[j][1] e i!=j){  //se i>=todos, acumula em a até dar a=b-1
	                a++
	            }se(boi[i][1] <= boi[j][1] e i!=j){  //se i<=todos, acumula em c até dar c=b-1
	                c++
	            }
	        }
	        se(a == b-1){
	            escreva("O boi ",boi[i][0],", que pesa ",boi[i][1],", é o mais pesado\n")
	            A=1
	        }senao se(c == b-1){
	            escreva("O boi ",boi[i][0],", que pesa ",boi[i][1],", é o mais leve\n")
	            C=1
	        }se(A==1 e C==1){ //quando etsiver tudo ok, seta a flag MED e finaliza
	            med=1
	        }
	        a=0
	        c=0
	        }
	    }
	}
}