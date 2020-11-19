#include <stdio.h>
#include <stdlib.h>

/* 3. Usando o primeiro exemplo de  AB implemente uma função para contar a altura de uma arvore. */

typedef struct reg {
	int info; 
    struct noh *esq;
    struct noh *dir;
} noh; 

noh* arv_criavazia(void) {
	return NULL;
}

noh* arv_cria(int c, noh* sae, noh* sad) {
	noh* p = (noh*)malloc(sizeof(noh));
     
    if(p == NULL) {
   		exit(1);
	}
	 
    p->info = c;
    p->esq = sae;
    p->dir = sad;
     
    return p;
 }

noh* arv_libera (noh* a){
	if (!arv_vazia(a)) {
		arv_libera(a->esq);
		arv_libera(a->dir);
		free(a);
 	}
	
	return NULL;
}

int arv_vazia(noh* a) {
	return a == NULL;
}

int arv_pertence (noh* a, int c) {
	if (arv_vazia(a)) {
		return 0;
	} else {
		return a->info==c ||
		arv_pertence(a->esq,c) ||
		arv_pertence(a->dir,c);
 	}
}

void arv_imprime (noh* a) {
	if (!arv_vazia(a)) {
		printf("%i ", a->info);
		
		arv_imprime(a->esq);
		arv_imprime(a->dir);
 	}
}

int altura (noh* a) {
	if (a == NULL) 
    	return -1;
	else {
    	int he = altura (a->esq);
    	int hd = altura (a->dir);
    	if (he < hd) {
    		return hd + 1;
		} else {
			return he + 1;
		}
   } 
}

int contarNos(noh *a){
	if(a == NULL)
    	return 0;
	else
    	return 1 + contarNos(a->esq) + contarNos(a->dir);
}

int contarNosEsq(noh *a){
	if(a == NULL)
        return 0;
	else
        return 1 + contarNosEsq(a->esq);
}

int contarNosDir(noh *a){
	if(a == NULL)
        return 0;
	else
        return 1 + contarNosDir(a->dir);
}

int maior(int a, int b){
	if(a > b)
        return a;
	else
        return b;
}

int maior_ramo(noh *a){
	if((a == NULL)) {
        return 0;
	}
	else{
    	return maior(contarNosDir(a), contarNosEsq(a));
       
        
   }
}

int main()
{
    noh* a1= arv_cria(10,arv_criavazia(),arv_criavazia());
    noh* a2= arv_cria(20,arv_criavazia(),a1);
    noh* a3= arv_cria(30,arv_criavazia(),arv_criavazia());
    noh* a4= arv_cria(40,arv_criavazia(),arv_criavazia());
    noh* a5= arv_cria(50,a3,a4);
    noh* a = arv_cria(60,a2,a5 );
    
    arv_imprime(a);
    
    printf("\n\n%d nos",contarNos(a));
    printf("\n\n%d nos a direita",contarNosDir(a));
    printf("\n\%d nos a esquerda",contarNosEsq(a));
    
    printf("\nA Arvore possui %d niveis.\n",maior_ramo(a));

    return 0;
}
