#ifndef LAB_2_CLASSES_3_VEHICLE_H
#define LAB_2_CLASSES_3_VEHICLE_H
#include <string>
using namespace std;

class Vehicle {
    string _make;
    string _model;
    unsigned int _year;
    float _price;
    unsigned int _mileage;
public:
    Vehicle();
    Vehicle(string make, string model, unsigned int year, float price, unsigned int mileage);
    void Display();
    string GetYearMakeModel();
    float GetPrice();
};


#endif //LAB_2_CLASSES_3_VEHICLE_H
