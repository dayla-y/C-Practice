#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int B; //Es local
	float A,C;
	printf("Ingrese A");
	scanf("%f", &A);
	printf("Ingrese B");
	scanf("%d", &B);
	divi(A,B);
	
	return 0;
}

int divi(float A, int B){
	float C;
	C=A/B;
	printf("Resultado C es &f\n", C);
	return 0;	
}
