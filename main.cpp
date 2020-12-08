#include <iostream>
#include <vector>
#include "Car.h"
using namespace std;

// function takes in a vector holding Car objects by reference - given parameter name 'fleet'
void carInfo(const vector<Car>& fleet){

  // outputs the fuel capacity and available fuel 
  for (Car c : fleet){
     cout << "\nFuel Capacity: " 
          << c.getFuelCapacity() 
          << "\nAvailable Fuel: "
          << c.getAvailableFuel()
          << "\n";
  }
}

int main() {

  // create a car using default constructor
  Car carA; // name of car object is carA
  carA.addFuel(20); // add fuel to carA 
  cout << "Car A created.\n";

  // create a car using the cstom constructor that sets fuel capacity 
  Car carB{20}; 
  cout << "Car B created.\n";

  Car carC{4}; /
  carC.addFuel(3); 
  cout << "Car C created.\n";

  //vector to hold Car objects  
  vector<Car> myGarage; 
  
  // adding each Car object into the vector 
  myGarage.push_back(carA);
  myGarage.push_back(carB);
  myGarage.push_back(carC);

  carInfo(myGarage);

}
