#include "../include/conta.hpp"

int main(int argc, char* argv[]){

	Conta c;

	c.conta = 52348;
	c.ag.nome = "Banco Itau";
	c.ag.numero_ag = 1089;
	c.titular.nome = "Fulano de Tal";
	c.titular.cpf = "154.784.854-86";
	c.saldo = 1024.45;

	Conta c2;

	c2.conta = 52784;
	c2.ag.nome = "Banco Santander";
	c2.ag.numero_ag = 7852;
	c2.titular.nome = "Sicrano";
	c2.titular.cpf = "178.452.785-75";
	c2.saldo = 3225.97;

	std::cout << "Numero da conta: " << c.conta << std::endl;
	std::cout << "Agencia: " << c.ag.numero_ag << " - " << c.ag.nome << std::endl;
	std::cout << "Titular da conta: " << c.titular.nome << " - " << c.titular.cpf << std::endl;
	std::cout << "Saldo atual: R$ " << c.saldo << std::endl;

	std::cout << std::endl;

	std::cout << "Numero da conta: " << c2.conta << std::endl;
	std::cout << "Agencia: " << c2.ag.numero_ag << " - " << c2.ag.nome << std::endl;
	std::cout << "Titular da conta: " << c2.titular.nome << " - " << c2.titular.cpf << std::endl;
	std::cout << "Saldo atual: R$ " << c2.saldo << std::endl;

	std::cout << std::endl;

	c.deposito(120.55);
	c.saque(500);

	c.transferencia(200, c2);

	std::cout << "Saldo atual conta 1: R$ " << c.saldo << std::endl;
	std::cout << "Saldo atual conta 2: R$ " << c2.saldo << std::endl;



	return 0;
}

