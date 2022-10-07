#include "Vehicle.h"
#include <iostream>
#include <utility>
using namespace std;

Vehicle::Vehicle() {
    _make = "COP3503";
    _model = "Rust Bucket";
    _year = 1900;
    _price = 0;
    _mileage = 0;
}

Vehicle::Vehicle(string make, string model, unsigned int year, float price, unsigned int mileage) {
    _make = make;
    _model = std::move(model);
    _year = year;
    _price = price;
    _mileage = mileage;
}

void Vehicle::Display() {
    cout << _year << " " << _make << " "  <<  _model << " $"  << _price  << " " << _mileage << endl;
}
float Vehicle::GetPrice() {
    return _price;
}
string Vehicle::GetYearMakeModel(){
    string yearMakeModel = to_string(_year) + " " + _make + " " + _model;
    return yearMakeModel;
}
