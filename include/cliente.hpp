#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>

class Cliente{

public:
	std::string nome;
	std::string cpf;
	static int qnt_clientes;

	Cliente();
	Cliente(std::string nome, std::string cpf);
	~Cliente();
};

#endif