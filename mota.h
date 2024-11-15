#ifndef MOTA_H
#define MOTA_H

#include "veiculo.h"

class Bike : public Vehicle{
    
    protected:
    
    string handlebar;
    
    public:
    
    Bike(string name, string handlebar);
    
    virtual void showDetails();
    
};

#endif