#ifndef _VPILHA_H_
#define _VPILHA_H_

typedef struct vpilha vPilha;

vPilha* cria_vpilha();

void libera_vpilha(vPilha* p);

void push_vpilha(vPilha* p, int e);

int pop_vpilha(vPilha* p);

int vazia_vpilha(vPilha* p);

#endif
