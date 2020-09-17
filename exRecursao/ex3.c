#include<stdio.h>
#include<conio.h>
#include <string.h> 

//3. Fazer uma fun??o recursiva que conta o n?mero de ocorr?ncias de um determinado caracter, caract(char c, char s[])

int caract(char c,char s[]){
	if (s[0] == '\0')
		return 0;
	if (s[0]==c) 
		return (1+caract(c,++s));
	return caract(c,++s);
}

int main(void){
	char s[50];
	char c;
	int t;
	
	printf("Digite uma palavra: ");
	gets(s);
	printf("Buscar numero de ocorrencias da letra: ");
	c=getchar();
	t=caract(c,s);
	printf("Encontrei %d vezes", t);
	getch();
	
	return 0;
}
