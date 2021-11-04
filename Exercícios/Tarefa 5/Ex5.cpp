#include <stdio.h>

int main(){
	int num[ 4 ][ 4 ];
	int lin;
	int col;
	int resul;
	int i;
	
	for (int lin = 0; lin < 4; lin++){
		for (int col = 0; col < 4; col++){
			printf ("Entre com valores para num[%d][%d] : ", lin, col);
			scanf ("%d", &num[lin][col]);
		}
	}
	
	printf ("\n---------------------");
	printf ("\nExibicao dos elementos da diagonal principal.\n");
	
	for (int lin = 0; lin < 4; lin++){
		for (int col = 0; col < 4; col++){
			while ( lin == col){
			printf ("\n[%d][%d]: %d. ", lin, col, num[ lin ][ col ] );
			break;
			}
		}
	}
}
