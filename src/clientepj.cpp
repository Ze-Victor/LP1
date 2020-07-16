#include "../include/clientepj.hpp"

ClientePJ::ClientePJ(std::string razao_social, std::string cnpj)
{
	this->razao_social = razao_social;
	this->cnpj = cnpj;
}
ClientePJ::ClientePJ()
{

}
void ClientePJ::setRazao(std::string razao_social)
{
	this->razao_social = razao_social;
}
std::string ClientePJ::getRazao()
{
	return razao_social;
}
void ClientePJ::setCNPJ(std::string cnpj)
{
	this->cnpj = cnpj;
}
std::string ClientePJ::getCNPJ()
{
	return cnpj;
}