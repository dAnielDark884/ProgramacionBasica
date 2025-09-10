#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float fahr, celsius;
	float lower , upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f %6.1f\n", fahr, celsius);     /*Los porcentajes estan para que nose muestre amontonado y para controlar el numero de caracteres*/
		fahr = fahr + step;
	}
	
	return 0;
}
