#include <stdio.h>
#include <conio.h>

/* 2. Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo
algoritmo de buble sort. */

void bubbleSort(char *vetor, int tamanho){
	int aux, i, j;
	
	printf("%i letras\n",tamanho-1);
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

int main(void) {
	// char t[] = {'a','d','f','j','l','n','s','t','u','z'};
    char t[] = {"william"};
	 int tamanho = sizeof(t)/sizeof(char);
	  bubbleSort(&t, tamanho);
	 int x =0;
	 for(x=0; x<tamanho; x++){
	    printf("%c\n", t[x]);    
	 }
	 getch(); 
}
