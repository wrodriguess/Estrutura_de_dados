#include<stdio.h>
#include"Contabancaria.h"

void Inicializa(ContaBancaria *conta, int numero, double saldo) {
	conta->numero = numero;
	conta->saldo = saldo;
}

void Deposito (ContaBancaria *conta, double valor) {
	conta->saldo += valor;
}

void Saque (ContaBancaria *conta, double valor) {
	conta->saldo -= valor;
}

void Imprime (ContaBancaria conta) {
	printf("Numero da conta: %d\n", conta.numero);
	printf("Saldo R$: %f\n", conta.saldo);
}
