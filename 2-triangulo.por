programa {
    inteiro a, b, c
	funcao inicio() {
		escreva("Insira o 1� valor: ")
		leia(a)
		escreva("Insira o 2� valor: ")
		leia(b)
		escreva("Insira o 3� valor: ")
		leia(c)
		se (a+b>c e b+c>a e a+c>b){
		    se(a==b ou a==c ou b==c){
		        se(a==b e b==c){
		            escreva("Tr�ngulo equil�tero\n")
		        }senao{
		            escreva("Tri�ngulo Is�celis\n")
		        }
		    }senao se(a!=b e b!=c){
		        escreva("Tri�ngulo escaleno")
		    }
		}senao{
		    escreva("Os valores n�o comp�em um tri�ngulo")
		}
	}
}