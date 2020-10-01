#include <stdio.h>
#include <conio.h>

/* 1-Faça um programa que leia 5 numeros inserindo-os em uma lista de forma ordenada 
utilizando a ideia do algoritmo de insert sort. No final, o programa deve mostrar 
todos os nomes ordenados alfabeticamente. */

void insertionSort( int *v, int tamanho ) 
{
	int i= 0;
	int j= 1;
	int aux = 0;
	while (j < tamanho) {
		aux = v[j];
		i = j - 1;
		while ((i >= 0) && (v[i] > aux)) {
			v[i + 1] = v[i];
			i = i - 1;
		}
		v[i + 1] = aux;
		j = j + 1;
	}
 }

int main(void) {
		int t[100], n=5, i = 0;
		
	    for (i = 0; i < n; i++) {
        printf("Digite um numero %d :",i+1);
        
        scanf(" %d", &t[i]);
    }
	
	// int t[] = {3,7,8,2,1,};
	 int tamanho = sizeof(t)/sizeof(int);
	 insertionSort(t, n);
	 int x =0;
	 for(x=0; x<n; x++){
	    printf("%i\n", t[x]);    
	 }
	 getch(); 
}
