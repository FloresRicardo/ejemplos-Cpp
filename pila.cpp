#include <iostream>

template <typename Tipo>
class Pila
{
    private:
    int tope;
    int max;
    Tipo *arreglo;
    
    public:
    Pila(int tam); //Constructor
    ~Pila();        //Destructor
    void push(Tipo dato);
    Tipo pop();
};

template <typename Tipo>
Pila<Tipo>::Pila(int tam)
{
    this->max = tam;
    this->tope = 0;
    arreglo = new Tipo[max];
}

template <typename Tipo>
Pila<Tipo>::~Pila()
{
    delete []arreglo;
}
template <typename Tipo>
void Pila<Tipo>::push(Tipo dato)
{
    
}

template <typename Tipo>
Tipo Pila<Tipo>::pop()
{
    
}

int main()
{
    Pila<int> miPila{5};
    
    miPila.push(3);
    miPila.push(7);
    int x = miPila.pop();
    std::cout << x << "\n";
    x = miPila.pop();
    std::cout << x << "\n";
    x = miPila.pop();
    std::cout << x << "\n";
}