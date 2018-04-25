#include <iostream>

class Calentador
{
    private: 
    int temperatura;
    int incremento;
    
    public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimeTempertura();
    int accedeTemperatura() const;
    
};//punto y coma obligatorio, es aprte dela sintaxis

Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}

void Calentador::calentar()
{
    temperatura += 5;
}

void Calentador::enfriar()
{
    temperatura -=5;
}

void Calentador::imprimeTempertura()//se debe eindicar a que classe pertenece el metodo, se hace con (clase::nombre del metod)
{
    std::cout << "La temperatura es: " << temperatura << std::endl;
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
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