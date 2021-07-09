programa {
    /*
    Autor: Pablo T. Monteiro
    Data: 14/06/2021
    */
    inteiro n=0, Ntotal
    cadeia bankData[3][40]
    
	funcao inicio() {
		escreva("Quantos participantes? Obs.: Capacidade máxima de 40\nO competidor precisa ter mais de 5 anos de idade\n")
		leia(Ntotal)
		enquanto(n != Ntotal){
		    escreva("Nome do(a) nadador(a): ")
		    leia(bankData[2][n])
		    escreva("Idade: ")
		    leia(bankData[1][n])
		    n=n+1
		}
		n=0
		limpa()
		enquanto(n!=Ntotal){
		    escreva(bankData[1][n]," | ", bankData[2][n], "\n")
		    n=n+1
		}
		limpa()
		para(n=0; n<Ntotal;n++){
		    se(bankData[1][n]=="05" ou bankData[1][n]=="06" ou bankData[1][n]=="07" ou bankData[1][n]=="5" ou bankData[1][n]=="6" ou bankData[1][n]=="7"){
		        bankData[0][n] = "Infantil A"
		    }senao se(bankData[1][n]=="08" ou bankData[1][n]=="09" ou bankData[1][n]=="10"){
		        bankData[0][n] = "Infantil B"
		    }senao se(bankData[1][n]=="11" ou bankData[1][n]=="12" ou bankData[1][n]=="13"){
		        bankData[0][n] = " Juvenil A"
		    }senao se(bankData[1][n]=="14" ou bankData[1][n]=="15" ou bankData[1][n]=="16" ou bankData[1][n]=="17"){
		        bankData[0][n] = " Juvenil B"
		    }senao{
		        bankData[0][n] = "  Adulto  "
		    }
		}
		n=0
		escreva("Categoria, Idade, Nome\n")
		enquanto(n!=Ntotal){
		    escreva(bankData[0][n]," | ",bankData[1][n]," | ", bankData[2][n], "\n")
		    n=n+1
		}
	}
}
