#include <stdio.h>
#include <conio.h>

/*4-Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo
algoritmo quick-sort. */

void quick_sort(char *a, int left, int right) {
    int i, j, x, y;  
	  
    i = left;
    j = right;
    x = a[(left + right) / 2];     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
	if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

int main(void) {
	char t[] = {"william"};
	 //int t[] = {3,7,8,2,1,9,23,6,12,8,4,1};
	 int tamanho = sizeof(t)/sizeof(char);
	 quick_sort(&t, 0, tamanho - 1);
	 int x =0;
	 for(x=0; x<tamanho; x++){
	    printf("%c\n", t[x]);    
	 }
	 getch(); 
}
