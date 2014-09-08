#include <stdlib.h>
#include <stdio.h>
#include "vpilha.h"

#define MAX 10

struct vpilha{
	int vpilha[MAX];
	int topo;
};

vPilha* cria_vpilha(){
	vPilha* p = (vPilha*) malloc(sizeof(vPilha));
	if (!p){ printf("Não foi possível alocar memória para a vPilha\n"); exit(1); }
	p->topo = 0;
	return p;
}

void libera_vpilha(vPilha* p){
	free(p);
}

void push_vpilha(vPilha* p, int e){
	if(p->topo == MAX){
		printf("vPilha cheia\n");
		return;
	}
	p->vpilha[p->topo] = e;
	p->topo++;
	return;
}

int pop_vpilha(vPilha* p){
	int x;
	if(vazia_vpilha(p)){
		printf("vPilha vazia");
		exit(1);	
	}
	x = p->vpilha[p->topo-1];
	p->topo--;
	return x;
}

int vazia_vpilha(vPilha* p){
	return p->topo == 0;
}
