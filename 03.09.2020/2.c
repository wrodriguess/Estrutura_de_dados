    #include<stdio.h>
    #include<conio.h>
    #include <string.h> 

	int ras = {10, 20, 30};
	int nomes = {11, 22, 33};
	int idades = {2, 4, 6};
	
    struct aluno{
    	int ra, nome, idade;
	};
	
	//Função adicionar -> Passar parametro por referencia
	void adicionar(struct aluno *a){
		(*a).ra = 10;
		(*a).nome = 20;
		(*a).idade = 360;	


	}
    
    //Declarando variaveis e struct aluno
    int main (void){
    	
		//Testando a função de maneira simples
		struct aluno a1;
		adicionar(&a1);
		
		printf("RA: %d\n", a1.ra);
		printf("NOME:  %d\n", a1.nome);
		printf("IDADE: %d\n", a1.idade);

    	
		return 0;
    }
