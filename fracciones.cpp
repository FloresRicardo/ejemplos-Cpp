#include <iostream>

class Fraccion
{
    private:
    int num;
    int den;
    
    public: 
    Fraccion(int num, int den);
    void imprimeFraccion();
    Fraccion operator +(Fraccion otraFraccion);
    Fraccion operator -(Fraccion otraFraccion);
    Fraccion operator *(Fraccion otraFraccion);
    Fraccion operator /(Fraccion otraFraccion);
    
    friend void operator <<(std::ostream &salida, Fraccion f); //funcion amiga para poder acceder a ala variables privadas de la clase.
    friend void operator >>(std::istream &entrada, Fraccion &f);
    
};

Fraccion::Fraccion(int num, int den)
{
    this->num = num;
    this->den = den;
}

void Fraccion::imprimeFraccion()
{
    std::cout << num <<"/" << den<< std::endl;
}

Fraccion Fraccion::operator+(Fraccion otraFraccion)
{
    Fraccion fr{(this->num)*(otraFraccion.den)+(this->den)*(otraFraccion.num),(this->den)*(otraFraccion.den)};
    return fr;
}

Fraccion Fraccion::operator-(Fraccion otraFraccion)
{
    Fraccion fr{(this->num)*(otraFraccion.den)-(this->den)*(otraFraccion.num),(this->den)*(otraFraccion.den)};
    return fr;
}

Fraccion Fraccion::operator*(Fraccion otraFraccion)
{
    Fraccion fr{(this->num)*(otraFraccion.num),(this->den)*(otraFraccion.den)};
    return fr;
}

Fraccion Fraccion::operator/(Fraccion otraFraccion)
{
    Fraccion fr{(this->num)*(otraFraccion.den),(this->den)*(otraFraccion.num)};
    return fr;
}

void operator<<(std::ostream &salida, Fraccion f)//el aperson es para indicar que no se crea una copia del tipo de dato, y pasa por referencia
{
    salida << f.num << "/" << f.den << "\n";
}

void operator>>(std::istream &entrada, Fraccion &f)
{
    entrada >> f.num >> f.den;
}

int main()
{
    Fraccion f1{3,8};
    Fraccion f2{4,5};
    Fraccion f3 = f1 + f2;
    f3.imprimeFraccion();
    f3 = f1 - f2;
    f3.imprimeFraccion();
    f3 = f1 * f2;
    f3.imprimeFraccion();
    f3 = f1 / f2;
    f3.imprimeFraccion();
    
    std::cin >> f3;
    std::cout << f3;
}