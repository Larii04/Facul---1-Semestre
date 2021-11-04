#include <stdio.h>
#include <string.h>

struct funcionario{
	char nome[30], funcao[40];
	int registro, diasT;
	float salario;
	
	void aumentoS(){
		float x, aumento;
		printf("\nInsira sua porcentagem(%%) de aumento: ");
		scanf("%f", &x);
		
		aumento = (salario*(x/100));
		salario = salario + aumento;
		
		printf("Voce teve um aumento de %.2f$\n", aumento);
		printf("O seu salario atual e' %.2f$\n", salario);
	}
	
	void faltas(){
		
		diasT = diasT - 1;
		
		printf("O total de dias trabalhados: %d\n", diasT);
	}
	
	void calcS(){
		float salarioM;
		salarioM = ((salario*30)/diasT);
		
		printf("\nO seu salario mensal e' de %.2f%\n", salarioM);
	}
};

int main(){
	funcionario controle;
	int menu;
	
	printf("Insira seu nome: ");
	fgets(controle.nome, 30, stdin);
	printf("Insira a sua funcao: ");
	fgets(controle.funcao, 40, stdin);
	printf("Insira o seu registro: ");
	scanf("%d", &controle.registro);
	printf("Insira os dias trabalhados: ");
	scanf("%d", &controle.diasT);
	printf("Insira o seu salario: ");
	scanf("%f", &controle.salario);
	
	while(menu != 4){
	printf("\n--Menu--");
	printf("\n1 - Aumento do salario;");
	printf("\n2 - Faltas;");
	printf("\n3 - Salario mensal;");
	printf("\n4 - Sair.");
	printf("\n\nInsira a opcao desejada: ");
	scanf("%d", &menu);
	
	switch(menu){
		case 1: 
			printf("Voce escolheu ver o seu aumento do salario!\n");
			controle.aumentoS();
			break;
		case 2:
			printf("Voce acionou as faltas!\n");
			controle.faltas();
			break;	
		case 3:
			printf("Voce escolheu ver o seu salario mensal!\n");
			controle.calcS();
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
