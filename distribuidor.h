#ifndef distribuidor_h
#define distribuidor_H

#include"produtos.h"

using namespace std;
class distribuidor{
 	int id;
 	string nome_distribuidor;
 	string cpf_cnpj;
 	string razao_social;
	string telefone_distri;
 	string email;
 	produtos *produtos;
 	
};


#endif
