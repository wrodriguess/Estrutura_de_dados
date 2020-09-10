#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	int matricula;
	float nota;
} tAluno;

int main(int argc, char *argv[]) {
	tAluno a1;
	a1.matricula = 123;
	a1.nota = 5.0;
	printf("Matricula=%i, nota=%f \n", a1.matricula, a1.nota);

	tAluno *p;
	p = &a1;
	(*p).nota = 6;
	printf("Matricula=%i, nota=%f \n", a1.matricula, a1.nota);

	p->nota = 7;	
	printf("Matricula=%i, nota=%f \n", a1.matricula, a1.nota);


	return 0;
}
