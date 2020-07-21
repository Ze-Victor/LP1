#include "../include/clientepj.hpp"

ClientePJ::ClientePJ(std::string razao_social, std::string cnpj)
{
	this->nome = razao_social;
	this->cpf = cnpj;
}
ClientePJ::ClientePJ()
{

}
void ClientePJ::setRazao(std::string razao_social)
{
	this->nome = razao_social;
}
std::string ClientePJ::getRazao()
{
	return this->nome;
}
void ClientePJ::setCNPJ(std::string cnpj)
{
	this->cpf = cnpj;
}
std::string ClientePJ::getCNPJ()
{
	return this->cpf;
}