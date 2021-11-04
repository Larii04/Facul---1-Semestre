#include <stdio.h>

int main(){
	FILE *fp;
	int cc, i=1;
	float saldoCc, saldoP;
	
	fp = fopen("c:\\aula10\\Ativ9\\dados.txt", "w");
		if(fp == 0){
		printf ("Erro ao abrir o arquivo!");
		return 1;
	}
	
	printf("--Dados da conta--\n\n");
	printf("Para finalizar digite 99999\n\n");
	
	rewind(fp);
		while(cc!=99999){
			printf("--Usuario %d--\n", i++);
			printf("Insira sua conta corrente: ");
			scanf("%d", &cc);
			
			if(cc == 99999){
				break;
			}
			else{
				printf("Insira o seu saldo da CC: ");
				scanf("%f", &saldoCc);
		
				printf("Insira o seu saldo da poupanca: ");
				scanf("%f", &saldoP);
				printf("\n");
			}
			fprintf(fp,"%d\t%.2f\t%.2f\n", cc, saldoCc, saldoP);
		}
	fclose(fp);
}
