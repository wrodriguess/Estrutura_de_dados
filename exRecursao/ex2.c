#include<stdio.h>
#include<conio.h>
#include <string.h> 

//2. Escrever uma fun??o recursiva que retorna o tamanho de um string, tamstring(char s[])

int tamstring(char s[]){
	if (s[0] == '\0')
 		return 0;
 	return 1+tamstring(&s[1]); 
}

int main(void){
	char s[50] = "Norton";
	int tamanho;

	tamanho = tamstring(s);
	printf("\n\n Tamanho da string: %d", tamanho);
		
 	return 0;
}

