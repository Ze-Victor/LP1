#include "../include/carro.hpp"

int Carro::qnt_carros;

Carro::Carro(std::string cor){
    this->cor = cor;
    this->qnt_carros+=1;
}

Carro::Carro(){
    this->cor = "Branco";
    this->qnt_carros+=1;
}

void Carro::acelera(int velocidade){
    this->velocidade += velocidade;
}

void Carro::freia(int velocidade){
    this->velocidade -= velocidade;
}

void Carro::ligaCarro(){
    motor.partida();
}
