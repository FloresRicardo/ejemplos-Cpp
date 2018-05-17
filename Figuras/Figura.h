#ifndef FIGURA_INCLUIDA
#define FIGURA_INCLUIDA//se colocan estan banderas para definir si ya se inlcuyo ono un archivo


class Figura
{
    protected:
        float area;
    
    public:
        Figura();
        virtual void calcularArea() = 0;
        void imprimirArea();
};

#endif