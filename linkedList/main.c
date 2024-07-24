#include<stdio.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

void inseir_no_inicio(No **lista,int num)
{
	No *novo = malloc(sizeof(No));

	if(novo)
	{
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
	}
	else
		printf("Erro ao alocar a memoria!");
}

