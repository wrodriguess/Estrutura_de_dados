// defini��o do tipo
typedef struct {
	int numero;
	double saldo;
} ContaBancaria;

// cabe�alho das fun��es
void Inicializa (ContaBancaria *, int, double);
void Deposito (ContaBancaria *, double);
void Saque (ContaBancaria *, double);
void Imprime (ContaBancaria);
