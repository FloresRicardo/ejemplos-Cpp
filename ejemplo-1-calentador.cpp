#include <iostream>

class Calentador
{
    private: 
    int temperatura;
    int incremento;
    int min;
    int max;
    
    public:
    Calentador(int min, int max, int temperatura = 0);//varaibles
    void calentar();
    void enfriar();
    void imprimeCentigrados();
    void imprimeFarenheit() const;
    int accedeTemperatura() const;
    
    bool operator==(Calentador otro);//sobrecarga del metodo miembro de la clase
    
};//punto y coma obligatorio, es aprte dela sintaxis

Calentador::Calentador(int min, int max, int temperatura)//parametros
{
    if(temperatura >= min && temperatura <= max){
        this->temperatura = temperatura;
    }else{
        this->temperatura = min;
    }
    incremento = 3;
    if(min < max){
        this->min = min;
        this->max = max;
    }
    else{
        //std::cout << "Error en el rango min-max" << std::endl;
        std::exit(EXIT_FAILURE);
        //throw "Error en el rango min-max";
        //this->min = max;
        //this->max = min;
    }
}


void Calentador::calentar()
{
    if(temperatura + incremento <= this->max)
    {
        temperatura += incremento;
    }
}

void Calentador::enfriar()
{
    if(temperatura - incremento >= this->min)
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

bool Calentador::operator==(Calentador otro)
{
    if(this->temperatura == otro.temperatura)
        return true;
    else
        return false;
}

int main()
{
    //try {
        Calentador c1{-10, 10};
        Calentador c2{30, 10, 0};
        
        if(c1 == c2){
            std::cout << "iguales\n";
        }
        else{
            std::cout << " diferentes \n";
        }


            c1.imprimeCentigrados();
            c1.imprimeFarenheit();
            c2.enfriar();
            c2.imprimeCentigrados();
            c2.imprimeFarenheit();
        
        
    //}
    /*catch(const std::runtime_error &e){
        
        }*/
    
}