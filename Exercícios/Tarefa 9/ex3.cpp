#include <stdio.h>

int main(){
	FILE *fp;
	int cc;
	float saldoCc, saldoP, count;
	
	fp = fopen("c:\\aula10\\Ativ9\\dados.txt", "r");
	
	printf("--Saldo total--\n");
		
	if(fp == 0){
	printf ("Erro ao abrir o arquivo!");
		return 1;
	}
	rewind(fp);
	while(!feof(fp)){
		fscanf(fp,"%d %f %f", &cc, &saldoCc, &saldoP);
		count = saldoCc + saldoP;
		
		if(!feof(fp)){
			printf("\nO saldo total e' de: %.2f", count);
		}
	}
	fclose(fp);
}
