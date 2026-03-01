//Vehicle renetal system practice without using chatgpt for logic building.
//Problem solved by using Single inheritance 
/*
    All vehicle gave : brand, model, rent per day
    only the car has extra : number of doors, Fule type, Insurence charge


    Class structure :

    Base class ----> vehicle
    Data member : brand, model, rentPerDay
    Functions : calculateRent(int days), displayVehicleInfo()

    Derived class ----> Car
    Extra data : numberOfDoors, fuleType
    Override : calculateRent(int days)
    (add extra 500 ruppe insurance charge)

*/

#include <iostream>
using namespace std;

//base class
class Vehicle {
    protected :
    string brand;
    int model;
    double rentPerDay;

    public :
    int days;
    Vehicle (string brand, int model, double rent) {
        brand = brand;
        model = model;
        rentPerDay = rent;
    }

    void askForDays() {
        cout << "Enter the days you want to rent the vehicle :";
        cin >> days;
    }

    void calculateRent() {
        rentPerDay += days;
    }
};

//derived class
class Car : public Vehicle {
    private :
    int numberOfDoors;
    string fuleType;

    public :
    Car (string brand, int model, double rent, int numOfDoors, string fuleType) : Vehicle (brand, model, rent) {
        numberOfDoors = numOfDoors;
        fuleType = fuleType;
    }
};

int main () {

    return 0;
}