    #include<stdio.h>
    #include<conio.h>
    #include <string.h> 
    int main (void){
    	int matriz[10][5], i, j;
    	char resposta[2];
    	
    	//Setando valor 0 em todos os elementos da matriz (Para caso usuário digitar um valor invalido)
    	for ( i=0; i<10; i++ ){
			for ( j=0; j<5; j++ ){
				matriz[ i ][ j ] = 0;
			}
		}
	    
	    //Pegando as respostas do usuário
		for ( i=0; i<10; i++ ){
			printf("Digite a resposta para a questao %d: ", i+1);
		   	scanf("%s", resposta);
		   			
		   	if(stricmp (resposta, "a") == 0)
		   		matriz[i][0] = 1;
		   	else if(stricmp (resposta, "b") == 0)
		   		matriz[i][1] = 1;
		   	else if(stricmp (resposta, "c") == 0)
		   		matriz[i][2] = 1;
		   	else if(stricmp (resposta, "d") == 0)
		   		matriz[i][3] = 1;
		   	else if(stricmp (resposta, "e") == 0)
		   		matriz[i][4] = 1;
		   	else
		   		printf("Valor invalido!\n");
		}
		
		//Imprimindo a tabela na tela de respostas
		system("cls"); 
		printf("RESPOSTAS\n###########\n\n");
		printf("QUESTAO   A  B  C  D  E\n");
		for ( i=0; i<10; i++ ){
			printf("    %d    ", i+1);
			for ( j=0; j<5; j++ ){
				 printf ("[%d]", matriz[ i ][ j ]);
			}
			printf("\n");
		}

		return 0;
    }
