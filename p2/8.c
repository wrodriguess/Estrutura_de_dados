 #include<stdlib.h>
#include<stdio.h>
#define COUNT 2 
typedef struct _arvore {
   int info;
   struct _arvore *esq;
   struct _arvore *dir;
} Arvore;



/*Cria uma arvore vazia!*/
Arvore* cria_arv_vazia () {
   return NULL;
}


/*Cria um no em uma arvore!*/
Arvore* inserir (Arvore *a, int v){
    if(a == NULL){
        a=(Arvore*)malloc(sizeof(Arvore));
        a->info = v;
        a->esq = NULL;
        a->dir = NULL;
    }
    else if(v < a->info){
        a->esq = inserir(a->esq,v);
    }
    else{
        a->dir = inserir(a->dir,v);
    }
    return a;
}


/*Imprime a arvore em níveis*/
void imprimiArvore(Arvore*a, int space) 
{ 
    if (a == NULL) 
        return; 
  
    // aumenta distância entre os níveis. A variavel space dada pelo usuário permite aumentar o espaço de exibição da arvore 
    space += COUNT; 
   
    imprimiArvore(a->dir, space); 
  
    // Print nó atual depois do space 
    printf("\n"); 
    for(int i = COUNT; i < space; i++) 
        printf(" "); 
    printf("%d\n", a->info); 
  
    imprimiArvore(a->esq, space); 
} 

/*Remove item da arvore*/
Arvore* Remover (Arvore *a, int v){
    if(a == NULL){
        return NULL;
    }
    else{
        if(a->info >v){
            a->esq = Remover (a->esq,v);
        }
        else if (a->info <v){
            a->dir = Remover (a->dir,v);
        }
        else{
            if((a->esq == NULL) && (a->dir == NULL)){
                free(a);
                a=NULL;
            }
            else if(a->dir == NULL){
                Arvore *tmp = a;
                a = a -> esq;
                free (tmp);
            }
            else if(a->esq == NULL){
                Arvore *tmp = a;
                a = a -> dir;
                free (tmp);
            }
            else{
                Arvore *tmp = a->esq;
                while(tmp->dir != NULL){
                    tmp=tmp->dir;
                }
                a->info = tmp->info;
                tmp->info = v;
                a->esq = Remover(a->esq,v);
            }
        }
    }
    return a;
}

int min (Arvore *a){
    if( a->esq != NULL){
        return min(a->esq);
    }
    else{
         return a->info;
    }
}

int max (Arvore *a){
    if (a->dir != NULL){
        return max(a->dir);
    }
    else{
        return a->info;
    }
}

/*Pesquisa item*/
int pesquisa(Arvore *a, int busca){
    if (a!=NULL){
    	if(a->info==busca){
          printf("Achou %i \n", busca);     
          return 0;
      	} else {
           int he, hd;
            if((a->info)<busca){
              hd = pesquisa(a->dir, busca);    
              return hd + 1;
          	} else {
              he = pesquisa(a->esq, busca);
              return he + 1;
          }
      }
    } 
    return 0;    
}

void listar (Arvore *arv) {
    if (arv != NULL){
       printf ("%d, ", arv->info);
       listar (arv->esq);
       listar (arv->dir);
    }
}


int main () {
	Arvore *a = cria_arv_vazia ();
	
	a = inserir (a, 50);
	a = inserir (a, 30);
	a = inserir (a, 90);
	a = inserir (a, 20);
	a = inserir (a, 40);
	a = inserir (a, 95);
	a = inserir (a, 10);
	a = inserir (a, 35);
	a = inserir (a, 19);
	printf("Inserindo na arvore: 50, 30, 90, 20, 40, 95, 10, 35, 19\n");
	printf("Imprimindo a arvore: ");
	imprimiArvore(a, 1);
	printf("Listando em linha\n");
	listar(a);
	printf("\nPesquisando 90\n");
	pesquisa(a, 90);
	printf("Removendo 90\n");
	Remover(a, 90);
	printf("Imprimindo a arvore\n");
	imprimiArvore(a, 1);
	printf("Listando em linha\n");
	listar(a);
	printf("\n");
	return 0;

}
