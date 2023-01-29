#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float A, B, C;
	printf("Ingrese el primer número ", A);
	scanf("%f", &A);
	printf("Ingrese el segundo número ", B);
	scanf("%f", &B);
	printf("Ingrese el tercer número ", C);
	scanf("%f", &C);

	
	//El mayor, siendo todos diferentes
	if (A > B && A > C){
		printf("El mayor es el primer numero\nNumero:  %.2f", A);
	}
	else if(B > A && B > C ){
		printf("El mayor es el segundo numero\nNumero:  %.2f", B);
	}
	else if (C > A && C > B){
		printf("El mayor es el tercer numero\nNumero:  %.2f", C);
	}
	else {
		printf("Todos los numeros son iguales");
	}

	return 0;
}
