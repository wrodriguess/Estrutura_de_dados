    #include<stdio.h>
    #include<conio.h>
    #include <string.h> 
    int main (void){
    	int maior_variacao, resp, i;
    	
    	struct dia{
    		int temp_min;
    		int temp_max;
    		float temp_media;
		};
		
		struct dia dia1;
		dia1.temp_min = 12;
		dia1.temp_max = 27;
		dia1.temp_media = (dia1.temp_min + dia1.temp_max)/2;
		
		struct dia dia2;
		dia2.temp_min = 13;
		dia2.temp_max = 29;
		dia2.temp_media = (dia2.temp_min + dia2.temp_max)/2;
		
		printf("     M E N U     \n");
		printf("#################\n\n");
		printf("[1] TEMPERATURA MINIMA DE TODOS OS DIAS\n");
		printf("[2] TEMPERATURA MAXIMA DE TODOS OS DIAS\n");
		printf("[3] MAIOR VARIAÇÃO DE TEMPERATURA DE TODOS OS DIAS\n");
		printf("[4] SAIR\n");
    	scanf("%d", &resp);
    	
    	
    	switch(resp){
    		case 1 :
    			system("cls"); 
    			printf("MINIMAS\n#########\n\n");
			    printf("%d\n", dia1.temp_min);
			    printf("%d\n", dia2.temp_min);
			    break;
		    
		    case 2 :
				system("cls"); 
    			printf("MAXIMAS\n#########\n\n");
			    printf("%d\n", dia1.temp_max);
			    printf("%d\n", dia2.temp_max);
			    break;
		    
		    case 3 :
		    	system("cls"); 
			    if((dia1.temp_max - dia1.temp_min) > maior_variacao){
			    	maior_variacao = dia1.temp_max - dia1.temp_min;
				}
				if((dia2.temp_max - dia2.temp_min) > maior_variacao){
			    	maior_variacao = dia2.temp_max - dia2.temp_min;
				}
				
				printf("A maior variacao registrada foi: %d", maior_variacao);
			    break;
		    
		    case 4 :
			    return 0;
			    break;
		}
    	
		return 0;
    }
