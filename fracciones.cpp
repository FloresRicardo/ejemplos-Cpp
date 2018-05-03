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
}