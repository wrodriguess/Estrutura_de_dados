#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float *v;
	int qtd, x;
	
	printf("Informe a quantida a ser armazenada:");
	scanf("%i", &qtd);
	
	v = (float*)malloc(qtd*sizeof(float));
	printf("\nO end. do vetor dinamico=%x", v);
	float media = 0;
	for(x=0;x<qtd;x++){
		printf("\nInforme um numero !");
		scanf("%f", &v[x]);
		media += v[x];
	}
	media = media /qtd;
	printf("\nA media do vetor dinamico = %f", media);
	free(v);
	
	
	return 0;
}
