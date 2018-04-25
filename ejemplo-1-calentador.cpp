#include <iostream>

class Calentador
{
    private: 
    int temperatura;
    
    public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimeTempertura();
    
};//punto y coma obligatorio, es aprte dela sintaxis

Calentador::Calentador()
{
    temperatura = 15;
}

void Calentador::calentar()
{
    temperatura += 5;
}

void Calentador::enfriar()
{
    temperatura -=5;
}

void Calentador::imprimeTempertura()
{
    std::cout << "La temperatura es: " << temperatura << std::endl;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimeTempertura();
    c2.enfriar();
    c2.imprimeTempertura();
}