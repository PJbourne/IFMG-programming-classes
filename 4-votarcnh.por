programa {
    /*
    Autor: Pablo T. Monteiro
    Data: 18/06/2021
    */
    inteiro age
	funcao inicio() {
		escreva("Qual a sua idade? ")
		leia(age)
		se(age>=16){
		    se(age<18){
		        escreva("Voc� pode emitir CNH e � obrigado a votar nas pr�ximas elei��es")
		    }se(age>=18){
		        escreva("Voc� pode votar se quiser, mas ainda n�o pode emitir CNH")
		    }
		}senao{
		    escreva("Voc� n�o pode nem emitir CNH, nem votar")
		}
	}
}
