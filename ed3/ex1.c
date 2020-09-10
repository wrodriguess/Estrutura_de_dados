#include <stdio.h>
#include <stdlib.h>
int main(){
  int continuar, opcao;
  float saldo = 1000, saque, deposito;
  float * ptr;
  ptr = &saldo;
  do{
  	system("cls"); 
    printf("1 - Saldo\n");
    printf("2 - Saque\n");
    printf("3 - Deposito\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
      case 1: printf("Seu saldo eh %.2f\n\n", *ptr);
              
			  printf("Deseja continuar?\n Digite -1- para continuar\n");
              scanf("%d", &continuar);
              if(continuar != 1)
                break;
              break;
      case 2: printf("Quantidade a ser sacada\n");
              scanf("%f", &saque);
              if(*ptr < saque)
                printf("Saldo insuficiente\n");
              else 
                *ptr-= saque;
              printf("Saldo atualizado para: %.2f \n", *ptr);
              
              printf("Deseja continuar?\n Digite -1- para continuar\n");
              scanf("%d", &continuar);
              if(continuar != 1)
                break;
              break;
      case 3: printf("Quantidade a ser depositada\n");
              scanf("%f", &deposito);
              *ptr += deposito;
              printf("Saldo atualizado para: %.2f \n", *ptr);
              
              printf("Deseja continuar?\n Digite -1- para continuar\n");
              scanf("%d", &continuar);
              if(continuar != 1)
                break;
              break;
    defaul:
    	break;
    	return 0;
    }
  } while(continuar == 1);

  return 0;
}
