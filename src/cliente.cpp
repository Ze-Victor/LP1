#include "../include/cliente.hpp"

int Cliente::qnt_clientes;

Cliente::Cliente(std::string nome, std::string cpf){
	this->nome = nome;
	this->cpf = cpf;
	this->qnt_clientes+=1;
};
Cliente::Cliente(){
	this->qnt_clientes+=1;
};
Cliente::~Cliente(){
};