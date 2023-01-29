#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char letra ='A';
	char cadena[20] = "cadena de texto";
	int numero_int = 22;
	long numero_long = 333;
	long long numero_longlong = 444444;
	float numero_float = 12.123;
	double numero_double = 12.123456;
	
	//float y double son los que más se van a usar en programas, en general.
	//*& se utiliza para indicar la dirección de una variable.
	
	printf("La letra es %c\n", letra);
	printf("La cadena de %s \n", cadena);
	printf("El numero int es %d\n", cadena);
	printf("El numero long es %1d\n", numero_long);
	printf("El numero long long es %d11\n", numero_longlong);
	printf("El numero float es %0.3f \n", numero_float); 
	printf("El numero double es %0.6lf\n", numero_double);
	}
	
