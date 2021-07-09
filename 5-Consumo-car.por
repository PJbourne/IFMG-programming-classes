programa {
    /*
    Autor: Pablo T. Monteiro
    Data: 18/06/2021
    */
    real cons, tanq, km, kmM, abas, reser = 5.0, gast = 100.0
    inteiro A = 0

	funcao inicio() {
	    escreva("Este programa foi desenvolvedo originalmente seguindo a ideia do fluxograma\nComo o meu fluxograma foi exageramanete avan�ado, dei uma aleatoriedade a este daqui, deixando-o mais 'realista'\n\nRecomendo valores realistas, por exemplo, para um consumo de 10km/l, \ndesde o ultimo abastecimento, seria l�gico a cada 1 Litro, andou aprox 10Km\n\n")
        escreva("Entre com a capacidade do tanque em Litros: ")
        leia(tanq)
        escreva("Entre com os Km percorridos: ")
        leia(km)
        escreva("Entre com a quantidade do ultimo abastecimento: ")
        leia(abas)
        A = 0
        real m = 0.0
        enquanto(A == 0){       //Este parte destina-se a simular um desempenho em rela��o a capacidade do tanque
            gast = gast - 0.1
            se(gast < reser){
                A = 1
                m=m+0.8
            }
            m=m+0.8
        }
        kmM = (tanq+m)*(tanq+m)/((m*tanq)*0.2)
        cons = km / abas
        escreva("\nO consumo foi de ",cons,"Km/L")
        escreva("\nA autonomia do carro � de ",kmM,"Km/h")
        se(kmM<60){
            escreva("\nAlto consumo, reomend�vel revisar o carro")
        }senao se(kmM>=60 ou kmM<=100){
            escreva("\nConsumo comum ou �timo")
        }senao{
            escreva("\nO consumo surpreendeu")
        }
	}
}
