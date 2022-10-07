#include "Dealership.h"
#include <iostream>

Dealership::Dealership() {
    _name = "Generic Dealership";
    _capacity = 0;
}

Dealership::Dealership(string name, unsigned int capacity) {
    _name = name;
    _capacity = capacity;
}

void Dealership::AddShowroom(Showroom s) {
    if(showrooms.size() == _capacity) {
        cout << "Dealership is full, can't add another showroom!";
    } else {
        showrooms.push_back(s);
    }

}

float Dealership::GetAveragePrice() {
    float totPricesAvg = 0.0f;
    int totCars = 0;
    for(unsigned int i = 0; i < showrooms.size(); i++) {
        totPricesAvg += showrooms[i].GetInventoryValue();
    }
    for(unsigned int i = 0; i < showrooms.size(); i++) {
        totCars += showrooms[i].GetVehicleList().size();
    }
    totPricesAvg = totPricesAvg / totCars;
    return totPricesAvg;
}

void Dealership::ShowInventory() {
    if (showrooms.size() == 0) {
        cout << _name << " is empty!" << endl;
        cout << "Average car price: $0.00" << endl;
    } else {
        for(unsigned int i = 0; i < showrooms.size(); i++) {
            showrooms[i].ShowInventory();
            cout << endl;
        }
        cout << "Average car price: $" << GetAveragePrice();
    }
}