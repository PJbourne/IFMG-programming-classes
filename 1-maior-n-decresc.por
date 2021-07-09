programa {
    /*
    Autor: Pablo T. Monteiro
    Data: 14/06/2021
    */
    inteiro n1, n2, n3
    
	funcao inicio() {
		escreva("Insira o 1º número: ")
		leia(n1)
		escreva("Insira o 2º número: ")
		leia(n2)
		escreva("Insira o 3º número: ")
		leia(n3)
		se(n1>n2 e n1>n3){
		    se(n2>n3){
		        escreva(n1,"  ",n2,"  ",n3)
		    }senao{
		        escreva(n1,"  ",n2,"  ",n3)
		    }
		    
		}senao se(n2>n1 e n2>n3){
		    se(n1>n3){
		        escreva(n2,"  ",n1,"  ",n3)
		    }senao{
		        escreva(n2,"  ",n3,"  ",n1)
		    }
		}senao se(n3>n1 e n3>n2){
		    se(n1>n2){
		        escreva(n3,"  ",n1,"  ",n2)
		    }senao{
		        escreva(n3,"  ",n2,"  ",n1)
		    }
		    //seção adicionada para sanar quando n1=n2 ou n2=n3 ou n1=n3
		}senao se(n1==n2){
		    se(n3>n1){
		        escreva(n3,"  ",n2,"  ",n1)
		    }senao{
		        escreva(n1,"  ",n2,"  ",n3)
		    }
		}senao se(n1==n3){
		     se(n2>n1){
		        escreva(n2,"  ",n3,"  ",n1)
		    }senao{
		        escreva(n1,"  ",n3,"  ",n2)
		    }
		}senao se(n3==n2){
		     se(n1<n2){
		        escreva(n3,"  ",n2,"  ",n1)
		    }senao{
		        escreva(n1,"  ",n2,"  ",n3)
		    }
		}
	}
}
