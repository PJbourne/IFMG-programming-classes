programa {
    /*
    Autor: Pablo Teodoro Monteiro
    Data: 08/06/2021
    */
    inteiro n1, n2, n3
	funcao inicio() {
		escreva("Digite o 1º número\n")
		leia(n1)
		escreva("Digite o 2º número\n")
		leia(n2)
		escreva("Digite o 3º número\n")
		leia(n3)
		se(n1<n2){                              //Se n1 for o menor numero
		    se(n2<n3){
		        escreva("Menor número é: ", n1)
		    }senao se(n1<n3){
		        escreva("Menor número é: ", n1)
		    }
		}senao se(n2<n3){                       //Se n2 for o menor numero
		    se(n3<n1){
		        escreva("Menor número é: ", n2)
		    }senao se(n2<n1){
		        escreva("Menor número é: ", n2)
		    }
		}se(n3<n1){                             //Se n3 for o menor numero
		    se(n1<n2){
		        escreva("Menor número é: ", n3)
		    }senao se(n3<n2){
		        escreva("Menor número é: ", n3)
		    }
		}
	}
}
