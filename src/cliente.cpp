#include "../include/cliente.hpp"

int Cliente::qnt_clientes;

Cliente::Cliente() : nome("Fulano de Tal"), cpf("154.785.457-85"){
	this->qnt_clientes+=1;
};
Cliente::~Cliente(){
};