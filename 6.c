#include <stdio.h>
#include <stdlib.h>

int main() {
	float A, B, C;
	printf("Inserte un numero valido ", A);
	scanf("%f", &A);
	printf("Inserte un numero valido ", B);
	scanf("%f", &B);
	printf("Inserte un numero valido ", C);
	scanf("%f", &C);
	
 printf("Veamos, ¿cual va a ser el mayor?");{
 	//'Ta raro, no manches, no me da pese a que he puesto to'
	if (A==B, B<=C)
		printf("A y B son iguales, por tanto C es mayor");
 	else if (A>=B, A>=C, B<=C)
 		printf("A es mayor que B y C es mayor que B");
 	else if (A<=B, A<=C, C>=B)
 		printf("C es mayor que B y B es mayor que A");
 	else if (A>=B, A<=C, C>=B)
 	 	printf("C es mayor que A y A es mayor que B");
 	else if (A>=B, A>=C, C>=B)
 	 	printf("A es mayor que C y C es mayor que B");
 	else if (A<=B, B>=C, A<=C)
 	 	printf("B es mayor que C y C es mayor que A");
 	else if (A<=B, B>=C, A<=C)
 		printf("B es mayor que C y C es mayor que B");
 	else
 		printf("¿No sabes leer? All dice 'Un numero', vuelve a intentar :p");
}
	return 0;
}
