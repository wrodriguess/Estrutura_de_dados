#include<stdio.h>
#include<conio.h>
#include <string.h> 

//1- escreva uma fun??o recursiva para calcular o valor de uma base x elevada a um expoente y.

int exponenciacao(int base, int expoente){
 	if(expoente == 0)
 		return 1;
 	else
		return (base * exponenciacao(base, expoente-1));
}

int main(){
	int base = 5;
	int expoente = 2;
	int resultado = 0;
	
	resultado = exponenciacao(base, expoente);
	printf("%d elevado a %d = %d", base, expoente,resultado);
	return 0;
}
