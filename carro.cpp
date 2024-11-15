#include "carro.h"

Car::Car(string name, int N_of_doors) : Vehicle(name), N_of_doors(N_of_doors){
    
}

void Car::showDetails(){
    cout << "--------------------------------------" << endl;
    
    cout << "Car name is: " << name << endl;
    cout << "Car number of doors is: " << N_of_doors << endl;
    
}