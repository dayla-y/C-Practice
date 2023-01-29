#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float x,y,z,w,a,b;
	printf("Ingrese x");
	scanf("%f", &x);
	a=3.0;
	b=4.0;

	printf("Ingrese y");
	scanf("%f", &y);

	printf("Ingrese z");
	scanf("%f", &z);

	printf("Ingrese w");
	scanf("%d", &w);
	
	printf("%f", (x/y)+(3.1416));
	
	printf("%f", 3.1416 + (x/(y-z)));
	
	printf("%f", (y-5.0)/(x-10.0));
	
	printf("%f", (y-x/z)/((x)*(a/b)));
	
	printf("%f",((y)-(x/z))/((x*a)/b)+w);

}
