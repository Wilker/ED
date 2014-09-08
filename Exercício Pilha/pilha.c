#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct no{
	char info;
	struct no* prox;
};

struct pilha{
	struct no* topo;
};

Pilha* cria_pilha(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	if (!p){ printf("Não foi possível alocar memória para a Pilha\n"); exit(1); }
	p->topo = NULL;
	return p;
}

void libera_no(struct no* t){
	if(t){
		libera_no(t->prox);
	}
	free(t);
	return;
}

void libera_pilha(Pilha* p){
	libera_no(p->topo);
	free(p);
}

void push_pilha(Pilha* p, char e){
	struct no* novo = (struct no*) malloc (sizeof(struct no));
	novo->info = e;
	novo->prox = p->topo;
	p->topo = novo;
	return;
}

char pop_pilha(Pilha* p){
	struct no* aux;
	char x;
	if(vazia_pilha(p)){
		printf("Pilha vazia\n");
//		exit(1);	
	}
	aux = p->topo;
	p->topo = p->topo->prox;
	x = aux->info;
	free(aux);
	return x;
}

int vazia_pilha(Pilha* p){
	return p->topo == NULL;
}

char topo_pilha(Pilha* p) {
    return p->topo->info;
}

