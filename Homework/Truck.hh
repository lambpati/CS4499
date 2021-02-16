#pragma once

#include <string>
#include "Vehicle.hh"

class Truck : public Vehicle{
  private:
    bool awd; // Assuming is otherwise awd or not
    int towingCapacity;

  public:
    Truck(int, float, float, std::string, std::string, bool, int);
    Truck();
    ~Truck();

    bool getAwd(){
      return awd;
    }
    int getTowing_capacity(){
      return towingCapacity;
    }

    void setAwd(bool isAWD){
      awd = isAWD;
    }
    void setTowing_capacity(int towing){
      towingCapacity = towing;
    }
};
