#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[61];
	char *nome2 = "jose da silva";
	
	printf("digite seu nome:");
	gets(nome);
	
	printf("seu nome = %s \n", nome);
	printf("seu nome = %s \n", nome2);
	printf("end nome2 = %x \n", &nome2);
	
	strcpy(nome, "Mariana da silva");
	printf("seu nome = %s \n", nome);
	printf("end nome2 = %x \n", &nome);
	
	return 0;
}
