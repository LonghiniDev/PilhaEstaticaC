#include "tipos.h"

int pop (TPilha *p)
{
	int valor;
	valor = p->pilha[p->topo].nome;
	p->topo--;
	return valor;
}
