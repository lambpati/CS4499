#pragma once
#include <random>

class Driver{
  private:
    std::string gender;
    std::string color;
    bool radioactive_mutant_vampire_bunny;

  public:
    //Constructors
    Driver(std::string gend, std::string col, bool isRMVB);
    Driver();

    //Getters
    std::string getGender(){return gender;}
    std::string getColor(){return color;}
    bool getIsRMVB(){return radioactive_mutant_vampire_bunny;}

    //Setters
    void setGender(std::string gend){gender=gend;}
    void setColor(std::string col){color=col;}
    void setIsRMVB(bool rmvb){radioactive_mutant_vampire_bunny=rmvb;}

    //Methods
    int generateNumber();
    void generateGender();
    void generateColor();
    void generateRMVB();
};
