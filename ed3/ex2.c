#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
typedef struct{
        int ra;
        char nome[50];
        int idade;
        
    }aluno;
  
    
void preencherAluno(aluno alunos[]) {
    for(i=0; i<10; i++){
    	
        printf("Digite o RA do %d aluno: \n", i + 1);
        scanf("%d", &alunos[i].ra);
        printf("Digite o nome do %d aluno: \n", i + 1);
        scanf("%s", &alunos[i].nome);
        printf("Digite a idade do %d aluno: \n", i + 1);
        scanf("%d", &alunos[i].idade);
        system("cls"); 
    }
}

int main(){
    
    printf("Entre com os dados dos alunos \n");
    aluno alunos[10];
    preencherAluno(alunos);
}
