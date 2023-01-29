#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int TI, DI, TU;
	
	printf("¿Cuanto tiempo estuviste en la llamada? ", TI);
	scanf("%d", &TI);
	printf("\n¿Que dia de la semana llamaste, empezando desde el lunes (#1) ", DI);
	scanf("%d", &DI);
		if (DI==1) {
			printf("\nHoy es lunes, ¿verdad?");
		}
		else if (DI==2) {
			printf("\nYa veo, martes");
		}
		else if (DI==3) {
			printf("\nEs un día de mier...coles :>");
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
			printf("\nEsto... ¿puedes ingresar un numero valido? Creo que ese no se puede");
		}
	printf("¿Es el turno e la mañana (#1)");
	return 0;
}
