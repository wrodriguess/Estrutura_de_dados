#include <stdio.h>
#include <stdlib.h>

/* 4. Escreva uma função que devolva o comprimento (ou seja, o número de elementos) da fila. */

int tamanho_Fila(Fila * fi){
	if(fi == NULL){
		return -1;
	}
	
	return fi->qtd;
}

