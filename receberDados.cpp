#include "tipos.h"

void receberDados (TPilha *p)
{
	if (p->topo >= 0)
	{
		int valor = pop(p);
		printf("\n Valor desempilhado: %d", valor);
	}
	else
	{
		printf("\n Pilha vazia!");
	}
	getch();

}
