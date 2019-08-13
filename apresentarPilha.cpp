#include "tipos.h"

void apresentarPilha (TPilha *p)
{
	if (p->topo >= 0)
	{
		for (int i = p->topo; i >= 0; i--)
		{
			printf("\n Indice %d: %d", i, p->pilha[i].valor);
		}
	}
	else
	{
		printf("\n Pilha vazia!");
	}
	getch();
}
