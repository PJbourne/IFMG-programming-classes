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
		        escreva("Você pode emitir CNH e é obrigado a votar nas próximas eleições")
		    }se(age>=18){
		        escreva("Você pode votar se quiser, mas ainda não pode emitir CNH")
		    }
		}senao{
		    escreva("Você não pode nem emitir CNH, nem votar")
		}
	}
}
