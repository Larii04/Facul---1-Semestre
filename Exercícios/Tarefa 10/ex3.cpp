#include <stdio.h>

struct consumo{
	char aparelho[20];
	float potencia, tempo, dias, consumoR;
};

int main(){
	consumo eletrod[5];
	float consumoT;
	
	printf("--Controle do consumo de energia dos eletrodomesticos--\n\n");
	for(int i=0; i<5; i++){
		printf("%dº eletrodomestico\n", i+1);
		fflush(stdin);
		printf("Insira o seu eletrodomestico: ");
		fgets(eletrod[i].aparelho, 20, stdin);
		printf("Insira o valor da potencia (em kW): ");
		scanf("%f", &eletrod[i].potencia);
		printf("Insira o seu tempo ativo (em horas): ");
		scanf("%f", &eletrod[i].tempo);
		printf("Insira a quantidade de dias em que esta ligado: ");
		scanf("%d", &eletrod[i].dias);
		printf("\n");
		
		eletrod[i].consumoR = eletrod[i].potencia * eletrod[i].tempo * eletrod[i].dias/1000;
		consumoT = eletrod[i].consumoR + eletrod[i].consumoR + eletrod[i].consumoR + eletrod[i].consumoR + eletrod[i].consumoR;
		
	}
	for(int i=0; i<5; i++){
		printf("\n consumo relativo do aparelho %d resulta em: %.2f\n", i, eletrod[i].consumoR);
		printf("O consumo total resulta em: %.2f\n\n", consumoT);
	}
}
