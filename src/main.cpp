#include "../include/conta.hpp"

int main(int argc, char* argv[]){

	Conta c;

	c.conta = 52348;
	c.titular = "Fulano de Tal";
	c.saldo = 1024.45;

	Conta c2;

	c2.conta = 52784;
	c2.titular = "Sicrano";
	c2.saldo = 845.80;

	std::cout << "Numero da conta: " << c.conta << std::endl;
	std::cout << "Titular da conta: " << c.titular << std::endl;
	std::cout << "Saldo atual: R$ " << c.saldo << std::endl;

	std::cout << std::endl;

	std::cout << "Numero da conta 2: " << c2.conta << std::endl;
	std::cout << "Titular da conta 2: " << c2.titular << std::endl;
	std::cout << "Saldo atual 2: R$ " << c2.saldo << std::endl;

	std::cout << std::endl;

	c.deposito(120.55);
	c.saque(500);

	c.transferencia(200, c2);

	std::cout << "Saldo atual conta 1: R$ " << c.saldo << std::endl;
	std::cout << "Saldo atual conta 2: R$ " << c2.saldo << std::endl;



	return 0;
}

