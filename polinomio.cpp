#include <iostream>
//Ecribir un programa llamadopolino0mi.cpp para representar y evaluar polinomios de grado 2

//agregar std::cin y std::cout<<P y std::cout<<P(2)

//agregar el operador ~ como raiz del plinomio

//agregar el std::cout << "es" << raiz;
class Polinomio
{
    private:
    int A;
    int B;
    int C;
    
    public:
    Polinomio(int A, int B, int C);
    int operator()(int x);
    friend void operator>>(std::istream &entrada, Polinomio &p);
    friend void operator<<(std::ostream &salida, Polinomio p);
    friend void operator<<(std::ostream &salida, int p);
    friend float Polinomio::operator~(Polinomio p);
};

Polinomio::Polinomio(int A, int B, int C)
{
    this->A = A;
    this->B = B;
    this->C = C;
}

int Polinomio::operator()(int x)
{
   return this->A*(x*x)+this->B*x+this->C;
}

void operator>>(std::istream &entrada, Polinomio &p)
{
    entrada >> p.A >> p.B >> p.C;
}

void operator<<(std::ostream &salida, Polinomio p)
{
    salida << "P(x) = " << p.A << "x^2 + " << p.B << "x + " << p.A << "\n";
}

float Polinomio::operator~(Polinomio p)
{
    return (-p.B + sqrt(p.B*p.B - 4*p.A*p.C))/(2*p.A);
}
int main()
{
    Polinomio P{3,2,1};
    int x=2;
    int r = P(x);
    float raiz;
    
    std::cin >> P;
    std::cout << P;
    std::cout << "Evaluado en x es " << P(x);
    
    
}