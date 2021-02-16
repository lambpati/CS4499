#include "Vehicle.hh"

Vehicle::Vehicle(int y, float mile, float val, std::string man, std::string mod) :
  year(y), mileage(mile), value(val), manufacturer(man), model(mod) {}
  Vehicle::Vehicle(){ //Default constructor implementation
    year = 2015;
    mileage = 60000;
    value = 20000;
    manufacturer = "Chevrolet";
    model = "Colorado";
  }
Vehicle::~Vehicle(){};
