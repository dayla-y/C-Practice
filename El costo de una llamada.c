#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int TI,DI,TU;
	float PAG, IM, TOT;
	//Primero el tiempo
	printf("¿Cuantos minutos estuviste llamando?: \n\t", TI);
	scanf("%d", &TI);
	{
	if(TI<=5){
		PAG = TI;
	}
	else if(TI<=8){
		PAG = (TI-5)*0.8+5;
	}
	else if(TI<=10){
		PAG =(TI-8)*0.7+7.4;
	}
	else {
		PAG = (TI-10)*0.5+8.8;
	}
	}
	//Luego el día de la semana
	printf("\n\n¿Que dia de la semana es? El lunes es #1:  \n\t", DI);
	scanf("%d", &DI);
	{
			if (DI==1) {
			printf("\nHoy es lunes, ¿verdad?");
		}
		else if (DI==2) {
			printf("\nYa veo, martes");
		}
		else if (DI==3) {
			printf("\nEs un dia de mier...coles :>");
		}
		else if (DI==4) {
			printf("\nAhhh,es jueves");
		}
		else if (DI==5) {
			printf("\n¡Oh! Viernes");
		}
		else if (DI==6) {
			printf("\nYa veo, ya veo, sabado, sabado");
		}
		else if (DI==7) {
			printf("\nDomingo...");
		}
		else {
			printf("\nEsto... ¿puedes ingresar un numero valido? Creo que ese no se puede\nPon uno que se pueda pofis", DI);
			scanf("%d", &DI);
		}
	}
	//Ahora lo del turno
	printf("\n\n¿Que turno es? \nMatunino es 1, vespetino es 2: \n\t", TU);
	scanf("%d", &TU);
	{
		if(TU == 1){
		printf("Turno matunito, ¿no?");
		}
		else if(TU == 2){
		printf("El turno vespertino, ok");
		}
		else{
			printf("No es un turno valido, inserte uno que si pueda usar: ", TU);
			scanf("%d", &TU);
		}
	}	
	
	{
	if (DI==7){
		IM = PAG*0.05;
	}
	else {
		if(TU==1){
			IM = PAG*0.15;
		}
		else{
			IM = PAG*0.10;
		}
	}
	
	TOT = PAG + IM;
	
	printf("\nTines que pagar %f, ", PAG);
	printf("el impuesto es %f ", IM);
	printf("\nPor lo tanto, el total es %f", TOT);
	}
	return 0;
}
