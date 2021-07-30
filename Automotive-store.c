//Descrição: exercício sobre struct
//Autor: Fábio lucio
//Data: 23/07/2021
// Modificado por: Isabele Beatriz dos Santos e Pablo Teodoro Monteiro
// Data: 27/07/2021

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

// definição de tipo
typedef struct {
  char modelo[21];
  char cor[11];
  int preco;
  int ano;
  float ipva;
} carro;
// definicoes de macros

#define QTE  5

// variaveis globais

//prototipos de funçoes
int menu(void);


/*-----Programa principal---*/
int main(void) {
	setlocale(LC_ALL,"portuguese");
	//variaveis
    carro veiculo[QTE];
    int escolha, op;
    int i;
    int barato=0, novo=0, preco;
    float desconto;
    char venda=0x01;                     //char no formato hexadecimal, utilizada para decisao de venda

    /*---------------processamento--------*/
    do{
		escolha=menu();
	    switch(escolha)	{
				case 1:
                        system("cls");
                        printf("---Cadastro de veiculos---\n");
                        for(i=0; i<QTE;i++){
                            fflush(stdin);
                            printf("Modelo do veiculo %d:",i+1);
                            scanf("%s",&veiculo[i].modelo);
                            fflush(stdin);
                            printf("Ano veiculo %d:",i+1);
                            scanf("%d",&veiculo[i].ano);
                            fflush(stdin);
                            printf("IPVA veiculo %d:",i+1);
                            scanf("%f",&veiculo[i].ipva);
                            fflush(stdin);
                            printf("Preco veiculo %d:",i+1);
                            scanf("%d",&veiculo[i].preco);
                            fflush(stdin);
                            printf("Cor veiculo %d:",i+1);
                            scanf("%s",&veiculo[i].cor);
                            fflush(stdin);
                        }
                    system("pause"); //pausa o programa ate teclar enter
                    system("cls");   // limpa tela
                break;
				case 2:
                        for(i=0; i<QTE; i++){
                            printf("\nVeiculo: %d\n",i+1);
                            printf("Modelo veiculo %d: %s \n",i+1,veiculo[i].modelo);
                            printf("Preço veiculo %d: %d\n",i+1,veiculo[i].preco);
                            printf("Ano veiculo %d: %d\n",i+1,veiculo[i].ano);
                            printf("IPVA veiculo %d: %0.2f\n",i+1,veiculo[i].ipva);
                            printf("Cor veiculo %d: %s\n",i+1,veiculo[i].cor);
                        }
                system("pause"); //pausa o programa ate teclar enter
                system("cls");   // limpa tela
                break;
				case 3:
                        i=0;
                        fflush(stdin);
				  		printf("Digite o veiculo desejado (1 a %d)\n",QTE);
						scanf("%d",&i);
						fflush(stdin);
						if(i>0 && i<=QTE){
							printf("Veiculo: %d\n",i);
					    	printf("Modelo do veiculo %d: %s \n",i,veiculo[i-1].modelo);
					    	printf("Preco veiculo %d: %d\n",i,veiculo[i-1].preco);
					        printf("Ano veiculo %d: %d\n",i,veiculo[i-1].ano);
					    	printf("IPVA veiculo %d: %0.2f\n",i,veiculo[i-1].ipva);
					        printf("Cor veiculo %d: %s\n",i,veiculo[i-1].cor);
					        printf("\n");
						}
                        else{
                          printf("Veiculo fora do estoque \n");
                        }
                    system("pause"); //pausa o programa ate teclar enter
                    system("cls");   // limpa tela
                break;

				case 4:
					/*-----Menu 2----*/
					op=0;
				  		printf("------Menu 2-----\n");
						printf("Digite uma das opções:\n");
						printf("(1)Carro mais novo\n");
						printf("(2)Carro mais barato\n");
						printf("(-1)sair\n");
						fflush(stdin);
						printf("Opção:",op);
						scanf("%d", &op);
						fflush(stdin);
                system("pause"); //pausa o programa ate teclar enter
                system("cls");   // limpa tela

						if (op==1){
								printf("Veículo mais novo:\n");
						        for(i=0; i<QTE;i++){
                                    if(veiculo[i].ano > veiculo[i-1].ano){
                                        novo=i;
                                    }
                                }
                                    system("cls");
                                    printf("Veiculo: %d\n",novo+1);
                                    printf("Modelo do veiculo %d: %s \n",novo+1,veiculo[novo].modelo);
                                    printf("Preco veiculo %d: %d\n",novo+1,veiculo[novo].preco);
                                    printf("Ano veiculo %d: %d\n",novo+1,veiculo[novo].ano);
                                    printf("IPVA veiculo %d: %0.2f\n",novo+1,veiculo[novo].ipva);
                                    printf("Cor veiculo %d: %s\n",novo+1,veiculo[novo].cor);
                                    printf("\n");
                            }

                        if (op==2){
                            printf("Veículo mais barato:\n");
                            for(i=0; i<QTE;i++){
                                if(veiculo[i].ano < veiculo[i-1].ano){
                                        barato=i;
                                    }
                            }
                                printf("Veiculo: %d\n",i);
                                printf("Modelo do veiculo %d: %s \n",barato+1,veiculo[barato].modelo);
                                printf("Preco veiculo %d: %d\n",barato+1,veiculo[barato].preco);
                                printf("Ano veiculo %d: %d\n",barato+1,veiculo[barato].ano);
                                printf("IPVA veiculo %d: %0.2f\n",barato+1,veiculo[barato].ipva);
                                printf("Cor veiculo %d: %s\n",barato+1,veiculo[barato].cor);
                                printf("\n");
                            }
                        system("pause"); //pausa o programa ate teclar enter
                        system("cls");   // limpa tela
                break;

                case 5:
							printf("Venda de veiculo\n");
							i=0;
							venda=0x01;                  //char no formato hexadecimal
							while(venda!=0x00){
                                fflush(stdin);
                                printf("Digite o veiculo desejado (1 a %d): \n",QTE);
                                scanf("%d",&i);
                                fflush(stdin);
                                if(i>0 && i<=QTE){
                                    printf("Veiculo: %d\n",i);
                                    printf("Modelo do veiculo %d: %s \n",i,veiculo[i-1].modelo);
                                    printf("Preco veiculo %d: %d\n",i,veiculo[i-1].preco);
                                    printf("Ano veiculo %d: %d\n",i,veiculo[i-1].ano);
                                    printf("IPVA veiculo %d: %0.2f\n",i,veiculo[i-1].ipva);
                                    printf("Cor veiculo %d: %s\n",i,veiculo[i-1].cor);
                                    printf("\n");
                                    printf("Deseja vender o veiculo? (S-sim/N-não): ");
                                    scanf ("%c", &venda);
                                    if(venda=='s' || venda=='S'){
                                        printf("Aplicar desconto ? (0 a 100): ");
                                        scanf("%f", &desconto );
                                        desconto =  (desconto/100) * veiculo[i-1].preco;
                                        printf("Valor do desconto: %d\n", desconto);
                                        desconto=veiculo[i-1].preco-desconto;
                                        printf("Carro vendido por: %.2f\n\n",desconto);
                                    }else if(venda=='n' || venda=='N'){
                                        venda=0x00;         //char no formato hexadecimal
                                    }
						    }
                    system("pause"); //pausa o programa ate teclar enter
                    system("cls");   // limpa tela
                break;
            }
        }
	}
	while(escolha!=-1);
    printf("saiu!!!!");
	return 0;
}

/*--------funções----------*/
int menu(void){
	int opcao=0;
    do{
		printf("Seja bem-vindo a Concessionária Lata Velha \n");
		printf("Escolha um das opções abaixo: \n");
		printf("(1)cadastro de veículos: \n");
		printf("(2)mostrar veículos: \n");
		printf("(3)buscar veículo: \n");
		printf("(4)pesquisar veículo: \n");
		printf("(5)venda de veículo: \n");
		printf("(-1)sair: \n");
		printf("Digite a opção: ");
		scanf("%d",&opcao);
		fflush(stdin);
		system("cls");
    }while(opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4 && opcao!=5 && opcao!=-1);
	return opcao;
}
