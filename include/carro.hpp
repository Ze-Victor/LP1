#ifndef CARRO_HPP
#define CARRO_HPP

#include <iostream>
#include <string>
#include "motor.hpp"

class Carro{

public:
    std::string tipo;
    std::string placa;
    int numPortas;
    int velocidade;
    std::string cor;
    Motor motor;

    static int qnt_carros;

    Carro(std::string cor);
    Carro();

    void acelera(int velocidade);
    void freia(int velocidade);
    void ligaCarro();


};

#endif