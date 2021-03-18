#pragma once
#include <random>
#include "Driver.hh"

class Driver{
  private:
    std::string gender;
    std::string color;
    std::string name;
    bool radioactive_mutant_vampire_bunny;

  public:
    //Constructors
    Driver(std::string gend, std::string col, std::string nam, bool isRMVB);
    Driver();

    //Getters
    std::string getGender() const{return gender;}
    std::string getColor() const{return color;}
    std::string getName() const{return name;}
    bool getIsRMVB() const{return radioactive_mutant_vampire_bunny;}

    //Setters
    void setGender(std::string gend){gender=gend;}
    void setColor(std::string col){color=col;}
    void setIsRMVB(bool rmvb){radioactive_mutant_vampire_bunny=rmvb;}

    //Methods
    int generateNumber();
    void generateGender();
    void generateColor();
    void generateRMVB();
    void generateName();
    bool chooseBetween();
};
