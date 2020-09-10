#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float somar(float a, float b){return a+b;};
float subtrair(float a, float b){return a-b;};
float multiplicar(float a, float b){return a*b;};
float dividir(float a, float b){return a/b;};


int main(int argc, char *argv[]) {
	float(*func)(float, float) = NULL;
	
	func = &subtrair;
	printf("Teste 1=%f\n", func(5,7));
	
	func = &dividir;
	printf("Teste 2=%f\n", func(8,2));
	
	
	
	return 0;
}
