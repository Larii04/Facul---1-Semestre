#include <stdio.h>

int main(){
	FILE *fp;
	char nome[40];
	
	fp = fopen("c:\\aula10\\Ativ9\\nomes.txt", "w");
		if(fp == 0){
		printf ("Erro ao abrir o arquivo!");
		return 1;
	}
	printf("--Armazenar nomes inseridos no bloco de texto--\n\n");
	
	rewind(fp);
	for(int i=1; i<=10; i++){
		printf ("Insira o %d nome: ", i);
		scanf("%s", &nome);
		
		fprintf(fp,"\nOs nomes digitados sao: %s", nome);
	}
	fclose(fp);
}
