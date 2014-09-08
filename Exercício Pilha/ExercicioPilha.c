
#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

int main() {

}

void converte(char *infx, char *posfx, int n, pilha* p) {
    int i, j = 0;
    for (i = 0; i < n; i++)
        if (infx[i] == ')')
            while (!(vazia_pilha(p))) {
                posfx[j] = pop_pilha(p);
                j++;
            } else
            if ((infx[i] == '+') || (infx[i] == '-') || (infx[i] == '*') || (infx[i] == '/') || (infx[i] == '('))
            push_pilha(p, infx[i]);
        else {
            posfx[j++] = infx[i];
        }
}