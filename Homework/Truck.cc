#include "Truck.hh"

Truck::Truck(int y, float mile, float val, std::string man, std::string mod, float date, bool isAwd, int towing) :
Vehicle(y,mile,val,man,mod,date), awd(isAwd), towingCapacity(towing){}
Truck::Truck(){
  Vehicle();
  awd = true;
  towingCapacity = 5000;
}
Truck::~Truck(){}
