#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>
#include <string>

class Conta{

public:
	int conta;
	std::string titular;
	float saldo;

	void saque(float valor);
	void deposito(float valor);
	void transferencia(float valor, Conta& c);

};

#endif