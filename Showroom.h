#ifndef LAB_2___CLASSES_PART_2_SHOWROOM_H
#define LAB_2___CLASSES_PART_2_SHOWROOM_H
#include <string>
#include "Vehicle.h"
#include <vector>

using namespace std;

class Showroom {
    string _name;
    unsigned int _capacity;
    vector<Vehicle> vehiclesShow;
public:
    Showroom();
    Showroom(string name, unsigned int capacity);
    vector<Vehicle> GetVehicleList();
    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();
};


#endif //LAB_2___CLASSES_PART_2_SHOWROOM_H
