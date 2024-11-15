#ifndef CARRO_H
#define CARRO_H

#include "veiculo.h"

class Car : public Vehicle{
    
    protected:
    
    int N_of_doors;
    
    public:
    
    Car(string name, int N_of_doors);
    
    virtual void showDetails();
    
};

#endif