#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p;
	p = malloc(10*sizeof(int));
	p[0] = 5;
	p[1] = 7;
	printf("O end 1=%x \n", &p);
	p = realloc(p, 20*sizeof(int));
	printf("O end 2=%x \n", &p);
	p[18] = 4;
	printf("[0]=%d [1]=%d [18]=%d", p[0], p[1], p[18]);
	free(p);
	return 0;
}
