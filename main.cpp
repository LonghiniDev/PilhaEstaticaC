#include "tipos.h"

int main()
{
	int opcao;
	TPilha P;
	
	inicializarPilha(&P);
	
	do
	{
		printf("\n 1 - Empilhar valor");
		printf("\n 2 - Desempilhar valor");
		printf("\n 3 - Apresentar pilha");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch (opcao)
		{
			case 1: lerDados(&P); break;
			case 2: receberDados(&P); break;
			case 3: apresentarPilha(&P); break;
		}
	}while (opcao != 0);
}
