#include<stdio.h>
#include<stdlib.h>
#include "ContaBancaria.h"
int main (void){
	ContaBancaria conta1;
	Inicializa(&conta1, 102030, 1000.00);
	printf("\nAntes da movimentacao:\n ");
	Imprime(conta1);
	
	Deposito(&conta1, 500.00); //Deposita 500, novo saldo 1500
	Saque(&conta1, 50.00); //Saca 50, novo saldo 1450
	printf("\nDepois da movimentacao:\n ");
	Imprime (conta1);
	system("PAUSE");
	return(0);
}
