#ifndef LAB_2___CLASSES_PART_3_DEALERSHIP_H
#define LAB_2___CLASSES_PART_3_DEALERSHIP_H
#include "Showroom.h"
#include <vector>
#include <string>

using namespace std;

class Dealership {
    string _name;
    unsigned int _capacity;
    vector<Showroom> showrooms;
public:
    Dealership();
    Dealership(string name, unsigned int capacity);
    void AddShowroom(Showroom s);
    void ShowInventory();
    float GetAveragePrice();
};


#endif //LAB_2___CLASSES_PART_3_DEALERSHIP_H
