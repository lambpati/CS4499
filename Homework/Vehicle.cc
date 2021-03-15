#include "Vehicle.hh"
#include <cmath>

Vehicle::Vehicle(int y, float mile, float val, std::string man, std::string mod, float date) :
  year(y), mileage(mile), value(val), manufacturer(man), model(mod), value_date(date) {}
  Vehicle::Vehicle(){ //Default constructor implementation
    year = 2015;
    mileage = 60000;
    value = 20000;
    manufacturer = "Chevrolet";
    model = "Colorado";
    value_date = 2021.1534; // February 25, 2021
  }
Vehicle::~Vehicle(){}

void Vehicle::updateValue(float current_date){
  value = value*pow((1-0.15),current_date-value_date);
  value_date = current_date;
}

float Vehicle::estimateValue(float estimated_date) const {
  float estimatedValue;
  estimatedValue = value*pow((1-0.15),estimated_date-value_date);
  return estimatedValue;
}
