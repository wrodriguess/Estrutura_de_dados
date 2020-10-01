#include <stdio.h>
#include <conio.h>

/* 3- Faça um programa que leia 10 numeros e ordene-os pelo tamanho utilizando o algoritmo
da seleção. No final, o algoritmo deve mostrar todos os nomes ordenados. */

void selection_sort(int *v, int tamanho) { 
int i, j, min, aux;
    for (i = 0; i < (tamanho-1); i++) {
        min = i;
        for (j = (i+1); j < tamanho; j++) {
            if(v[j] < v[min]) min = j;
        }
        if (v[i] != v[min]) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
 }

int main(void) {

	int numeros[100], n=10, i = 0;
		
    for (i = 0; i < n; i++) {
	    printf("Digite o %d numero: ",i+1);   
    	scanf(" %d", &numeros[i]);
    }
	
	int tamanho = sizeof(numeros)/sizeof(int);
	selection_sort(&numeros, n);
	int x =0;
	for(x=0; x<n; x++){
		printf("%i\n", numeros[x]);    
	}
	getch(); 
}
