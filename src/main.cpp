#include "../include/conta.hpp"
#include "../include/cliente.hpp"
#include "../include/agencia.hpp"
#include "../include/clientepj.hpp"
#include "../include/Fila.hpp"

int main(int argc, char* argv[]){

	Cliente cl1("Lyz Maria", "078.352.785-52");
    Cliente cl2("Annyzia Maria", "078.352.785-52");
    Cliente cl3("Genicleide", "078.352.785-52");
    Cliente cl4("José Antonio", "078.352.785-52");

    ClientePJ cpj1("Baby beauty", "078.352.785-52");
    ClientePJ cpj2("Lojas baby", "078.352.785-52");
    ClientePJ cpj3("Lojas Lyz", "078.352.785-52");

    Fila <Cliente> fila1(4);

    fila1.push(cl1);
    fila1.push(cl2);
    fila1.push(cl3);
    fila1.push(cl4);

    std::cout << fila1.size() << std::endl;
    std::cout << fila1.empty() << std::endl;
    std::cout << fila1.front().nome << std::endl;
    std::cout << fila1.back().nome << std::endl;

    fila1.pop();

    std::cout << fila1.back().nome << std::endl;

    Fila <ClientePJ> fila2(3);


    fila2.push(cpj1);
    fila2.push(cpj2);
    fila2.push(cpj3);


	return 0;
}

