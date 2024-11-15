#include "mota.h"

Bike::Bike(string name, string handlebar) : Vehicle(name), handlebar(handlebar){
    
}

void Bike::showDetails(){
    cout << "--------------------------------------" << endl;
    
    cout << "Bike name is: " << name << endl;
    cout << "Bike handlebar is: " << handlebar << endl;
    
    cout << "--------------------------------------" << endl;
}