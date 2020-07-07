#include "../include/conta.hpp"

void Conta::saque(float valor){
	if(valor > saldo){
		std::cout << "Saldo insuficiente!" << std::endl;
	}else{
		saldo -= valor;
		std::cout << "Saque efetuado com sucesso." << std::endl;
	}
};
void Conta::deposito(float valor){

	saldo += valor;
	std::cout << "Deposito concluído."  << std::endl;

};
void Conta::transferencia(float valor, Conta& c){
	c.saldo += valor;
	this->saldo -= valor;
};