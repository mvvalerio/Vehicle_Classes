#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

using namespace std;


class Vehicle{
    
    protected:
    
        string name;
    
    public:
    
        Vehicle(string name);
    
        virtual void showDetails();  
    
};

#endif