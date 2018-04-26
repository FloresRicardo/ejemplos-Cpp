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
    void imprimeCentigrados();
    void imprimeFarenheit() const;
    int accedeTemperatura() const;
    
};//punto y coma obligatorio, es aprte dela sintaxis

Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}


void Calentador::calentar()
{
    if(temperatura + incremento <= 30)
    {
        temperatura += incremento;
    }
}

void Calentador::enfriar()
{
    if(temperatura - incremento >= -10)
    {
        temperatura -=incremento;
    }
}

void Calentador::imprimeCentigrados()//se debe eindicar a que classe pertenece el metodo, se hace con (clase::nombre del metod)
{
    std::cout << "La temperatura es: " << temperatura 
    << "°C" << std::endl;
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

void Calentador::imprimeFarenheit() const
{
    float farenheit = temperatura * 1.8 + 32;
    std::cout << "La temperatura es: " << farenheit
    << "°F" << std::endl;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    for(int i = 0; i < 10; i++)
    {
        c1.calentar();
        c1.imprimeCentigrados();
        c1.imprimeFarenheit();
        c2.enfriar();
        c2.imprimeCentigrados();
        c2.imprimeFarenheit();
    }
}