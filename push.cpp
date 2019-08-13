#include "tipos.h"

void push(TPilha *p, TElemento v)
{
	p->topo++;
	p->pilha[p->topo] = v;	
}
