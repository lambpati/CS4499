#pragma once

#include <string>
#include "Vehicle.hh"

class Truck : public Vehicle{
  private:
    bool awd; // Assuming is otherwise awd or not
    int towingCapacity;

  public:
    Truck(int, float, float, std::string, std::string, float, bool, int);
    Truck();
    ~Truck();

    bool getAwd() const{
      return awd;
    }
    int getTowing_capacity() const{
      return towingCapacity;
    }

    void setAwd(bool isAWD){
      awd = isAWD;
    }
    void setTowing_capacity(int towing){
      towingCapacity = towing;
    }
};
