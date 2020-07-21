#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include <iostream>
#include <string>
#include "cliente.hpp"

class ClientePJ : protected Cliente{

public:
	ClientePJ();
	ClientePJ(std::string razao_social, std::string cnpj);
	void setRazao(std::string razao_social);
	std::string getRazao();
	void setCNPJ(std::string cnpj);
	std::string getCNPJ();
};

#endif