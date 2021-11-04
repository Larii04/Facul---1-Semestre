#include<stdio.h>
#include <string.h>

struct cliente{
	char nome[30];
	float CC, saldo;
	
	void retirada(){
		float x;
		printf("\nInsira o valor da retirada: ");
		scanf("%f", &x);
		if(x > saldo){
			printf("Saldo indisponivel para o valor desta retirada!!!");
		}
		else{
			saldo = saldo - x;
			printf("\nO seu saldo atual e': %.2f$\n", saldo);
		}
	}
	
	void deposito(){
		float x;
		printf("\nInsira o valor do deposito: ");
		scanf("%f", &x);
		
		saldo = saldo + x;
		
		printf("\nO seu saldo atual e': %.2f$\n", saldo);
	}
	
	void exibirSaldo(){
		printf("\nO seu saldo e': %.2f$\n", saldo);
	}
	
};

int main(){
	cliente contaB;
	int x, menu;
	
	printf("Insira o seu nome: ");
	fgets(contaB.nome, 30, stdin);
	printf("Insira o numero da sua conta corrente: ");
	scanf("%f", &contaB.CC);
	printf("Insira o seu saldo: ");
	scanf("%f", &contaB.saldo);
	
	while(menu != 4){
	printf("\n--Menu--");
	printf("\n1 - Deposito;");
	printf("\n2 - Retirada;");
	printf("\n3 - Saldo;");
	printf("\n4 - Sair.");
	printf("\n\nInsira a opcao desejada: ");
	scanf("%d", &menu);
	
		switch(menu){
		case 1: 
			printf("Voce escolheu deposito!\n");
			contaB.deposito();
			break;
		case 2:
			printf("Voce escolheu retirada!\n");
			contaB.retirada();
			break;	
		case 3:
			printf("Voce escolheu saldo!\n");
			contaB.exibirSaldo();
			break;	
		case 4:
			printf("Sair!!\n");
			break;	
		default:
			printf("Nao existe esta opcao!!!");
			break;	
		}
    }	
}
