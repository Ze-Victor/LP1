#ifndef CLIENTEPF_HPP
#define CLIENTEPF_HPP

#include <iostream>
#include <string>
#include "cliente.hpp"

class ClientePF : protected Cliente{

public:
	ClientePF(std::string nome, std::string cpf);
	ClientePF();
	~ClientePF();
};

#endif