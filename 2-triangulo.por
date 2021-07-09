programa {
    inteiro a, b, c
	funcao inicio() {
		escreva("Insira o 1º valor: ")
		leia(a)
		escreva("Insira o 2º valor: ")
		leia(b)
		escreva("Insira o 3º valor: ")
		leia(c)
		se (a+b>c e b+c>a e a+c>b){
		    se(a==b ou a==c ou b==c){
		        se(a==b e b==c){
		            escreva("Trângulo equilátero\n")
		        }senao{
		            escreva("Triângulo Isócelis\n")
		        }
		    }senao se(a!=b e b!=c){
		        escreva("Triângulo escaleno")
		    }
		}senao{
		    escreva("Os valores não compõem um triângulo")
		}
	}
}