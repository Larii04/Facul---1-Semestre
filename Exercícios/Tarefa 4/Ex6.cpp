#include <stdio.h>

int main(){
	int mes;
	
	printf ("Selecao de meses.\n ");
	printf ("Entre com um valor de 1 a 12: ");
	scanf ("%d", &mes);
	
	switch (mes){
	case 1:
		printf ("Mes: Janeiro, com 31 dias.");
		break;
		case 2:
		printf ("Mes: Fevereiro, com 28 dias. ");
		break;
	    case 3:
		printf (" Mes: Marco, com 31 dias. ");
		break;
	    case 4:
		printf ("Mes: Abril, com 30 dias. ");
		break;
		case 5:
		printf ("Mes: Maio, com 31 dias. ");
		break;
		case 6:
		printf("Mes: Junho, com 30 dias. ");
		break;
	    case 7:
		printf ("Mes: Julho, com 31 dias. ");
		break;
	    case 8:
		printf ("Mwa: Agosto, com 31 dias. ");
		break;
	    case 9:
		printf ("Mes: Setembro, com 30 dias. ");
		break;
	    case 10:
		printf ("Mes: Outubro, com 31 dias. ");
		break;
	    case 11:
		printf ("Mes: Novembro, com 30 dias. ");
		break;
	    case 12:
		printf ("Mes: Dezembro, com 31 dias. ");
		break;
	}
}
