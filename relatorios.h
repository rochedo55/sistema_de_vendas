#ifndef relatorio_H
#define relatorio_H

#include"produtos.h"

class relatorio{
	produtos *coisas;
	// vou importar de produtos pra saber quais e quantos produtos ha no estoque
	void imprimir_estoque(produtos *coisas);
};


#endif
