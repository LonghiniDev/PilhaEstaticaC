#include "tipos.h"

void lerDados (TPilha *p)
{
	TElemento v;
	printf("\n Informe valor: ");
	scanf("%d", &v.valor);
	push(p, v);
}
