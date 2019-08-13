#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct tipoElemento
{
	char nome[10];
	int valor;
}TElemento;

typedef struct tipoPilha
{
	TElemento pilha[10];
	int topo;
}TPilha;

void inicializarPilha (TPilha *p);
void push (TPilha *p, TElemento v); //empilhar
int pop (TPilha *p); // desempilhar
void lerDados (TPilha *p);
void receberDados (TPilha *p);
void apresentarPilha (TPilha *p);

#endif
