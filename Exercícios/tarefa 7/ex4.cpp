#include <stdio.h>

float P1, P2, P3, Pmaior, aux;

float media(float num1, float num2);
float media2(float num1, float num2);
float aprovado();
float aprovado2();

 int main(){

	printf("--Calculo da media da faculdade--\n\n");
    printf("Insira a sua nota da P1: ");
    scanf("%f", &P1);
	printf("Insira a sua nota da P2: ");
    scanf("%f", &P2);

    aux = media(P1, P2);

    printf("\n\nA sua media foi: %.2f\n", aux);
    
    if(aux >= 5)
    {
        aprovado();    
    }
    else
    {
        if(P1 > P2)
        {
            P1 = Pmaior;
        }
        else
        {
            P2 = Pmaior;
        }

        media2(Pmaior, P3);
        aprovado();
        aprovado2();
    }
}

float media(float num1, float num2){
    float media;
    media = (num1 + 2*num2)/3;
    return media;
}

float media2(float num1, float num2){
    float media;
    media = (num1 + 2*num2)/3;
    return media;
}

float aprovado(){
    if (media(P1,P2) >= 5 ){
        printf("Voce foi aprovado!!");
    }
    else{ 
    printf("Voce foi reprovado!!\n\n");
    printf("Insira a nota da P3: ");
    scanf("%f", &P3);
    }
}

float aprovado2(){
    if (media(Pmaior, P3) >= 5 ){
        printf("Parabens voce conseguiu, APROVADA!!");
    }
    else {
    printf("A média foi: %.2f\n", media(Pmaior, P3));
    printf("Voce ficou de DP!!");
    }
}
