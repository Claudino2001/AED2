#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct tp_no{
	struct tp_no *esq;
	tp_item info;
	struct tp_no *dir;
}tp_no;

typedef tp_no * tp_arvore;

tp_arvore inicializa(){
	return NULL;
}

int arvore_vazia(tp_arvore raiz){
	if(raiz == NULL) return 1;
	else return 0;
}

tp_no *aloca_no(){ //aloca e retorna o endereço
	tp_no *no;
	no = (tp_no*)malloc(sizeof(tp_no));
	return no;
}

int insere_no(tp_arvore *raiz, tp_item e){
	tp_no *pai = NULL, *novo, *p=*raiz; //*p = ponteiro auxiliar
	//*p=*raiz ==>> int *p; p = *raiz; é a mesma coisa
	novo = aloca_no(); // cria um novo elemento e coloca o endereço dele no novo 
	if(!novo) return 0; //não deu para alocar (novo==NULL)
	
	novo->info = e; 
	novo->esq = NULL;
	novo->dir = NULL;
	
	while(p!=NULL){ //busca a posição onde dera inserido o novo no
		pai = p;
		if(e < p->info){
			p=p->esq;
		}
		else
			p = p->dir;
	}
	
	if(pai!=NULL){ //
		if(e < pai->info)
			pai->esq = novo;
			else
				pai->dir = novo;
	}
	else
		*raiz = novo;
		
	return 1;	
}





