#include <stdio.h>

int main(){
	FILE *fp;
	int nulo, chapa1, chapa2, chapa3, votoNulo, totalnulos;
	float votoA, votoB, votoC, pvotoA, pvotoB, pvotoC, totalvotos;
	
	fp = fopen("c:\\aula10\\Ativ9\\eleicao.txt", "r");
	
	printf("--Eleicao para o Diretorio Academico da Engenharia--\n\n");
	
	if(fp == 0){
	printf ("Erro ao abrir o arquivo!");
	return 1;
	} 
	
	rewind(fp);
    while(!feof(fp)){
    	
	fscanf(fp,"%d %d %d %d", &nulo, &chapa1, &chapa2, &chapa3);
		
	if(nulo == 0 || chapa1 >= 0 || chapa2 >= 0 || chapa3 >= 0){
        votoNulo++;
      }

      if(nulo <= 1 || chapa1 == 1 || chapa2 >= 1 || chapa3 >= 1){
        votoA++;
      }

      if(nulo <= 2 || chapa1 <= 2 || chapa2 == 2 || chapa3 >= 2){
        votoB++;
      }

      if(nulo <= 3 || chapa1 <= 3 || chapa2 <= 3 || chapa3 == 3){
        votoC++;
      }
    }
    fclose(fp);
    
    totalvotos = votoA + votoB + votoC + votoNulo;
    totalnulos = votoNulo;

    pvotoA = (votoA/totalvotos)*100;
    pvotoB = (votoB/totalvotos)*100;
    pvotoC = (votoC/totalvotos)*100;

    printf("O total de votos computados e': %.2f\n\n", totalvotos);
    printf("O total de votos Chapa1: %.2f\nO total de votos Chapa2: %.2f\nO total de votos Chapa3: %.2f\n", votoA, votoB, votoC);
    printf("O total de votos brancos ou nulos e': %d\n\n", totalnulos);
	printf("A porcentagem da Chapa1 e': %.2f%%\n", pvotoA);
    printf("A porcentagem da Chapa2 e': %.2f%%\n", pvotoB);
    printf("A porcentagem da Chapa3 e': %.2f%%\n", pvotoC);
}
