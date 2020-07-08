#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>
#include <string>
#include "cliente.hpp"
#include "agencia.hpp"

class Conta{

public:
	int conta;
	Cliente titular;
	Agencia ag;
	float saldo;

	static int qnt_contas;

	Conta();
	Conta(Cliente titular);
	~Conta();

	void saque(float valor);
	void deposito(float valor);
	void transferencia(float valor, Conta& c);

};

#endif