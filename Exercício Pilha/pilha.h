#ifndef _PILHA_H_
#define _PILHA_H_

typedef struct pilha Pilha;

Pilha* cria_pilha();

void libera_pilha(Pilha* p);

void push_pilha(Pilha* p, char e);

char pop_pilha(Pilha* p);

int vazia_pilha(Pilha* p);

char topo_pilha(Pilha *p);

#endif
