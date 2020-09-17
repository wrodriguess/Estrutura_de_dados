#include<stdio.h>
#include<conio.h>
#include <string.h> 

//4. Escreva uma fun??o recursiva que produza o reverso de um string, reverse(char s[])

void reverse(char s[]) {
	if (s[0] != '\0'){
		reverse(&s[1]);
		printf("%c",s[0]);
	} 
}

int main(void) {
	char s[50];
	char c;
	int t;
	printf("\nDigite a string: ");
	gets(s);
	reverse(s);
	getch(); 
	
	return 0;
}

