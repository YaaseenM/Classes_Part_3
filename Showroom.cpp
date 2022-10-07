#include <iostream>
#include "Showroom.h"

Showroom::Showroom() {
    _name = "Unnamed Showroom";
    _capacity = 0;
}

Showroom::Showroom(string name, unsigned int capacity) {
    _name = name;
    _capacity = capacity;
}

void Showroom::AddVehicle(Vehicle v) {
    if(vehiclesShow.size() == _capacity) {
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
    } else {
        vehiclesShow.push_back(v);
    }

}

float Showroom::GetInventoryValue() {
    float totPrices = 0.0f;
    for(unsigned int i = 0; i < vehiclesShow.size(); i++) {
        totPrices += vehiclesShow[i].GetPrice();
    }
    return totPrices;
}

void Showroom::ShowInventory() {
    if (vehiclesShow.size() == 0) {
        cout << _name << " is empty!" << endl;
    } else {
        cout << "Vehicles in " << _name << endl;
        for(unsigned int i = 0; i < vehiclesShow.size(); i++) {
            vehiclesShow[i].Display();
        }
    }


}

vector<Vehicle> Showroom::GetVehicleList() {
    return vehiclesShow;
}
