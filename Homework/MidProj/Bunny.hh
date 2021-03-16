#pragma once

#include <string>

class Bunny{
  private:
    std::string gender;
    std::string color;
    int age;
    std::string name;
    bool radioactive_mutant_vampire_bunny;

  public:
    // Constructors
    Bunny(std::string gend, std::string col, int years, std::string nam, bool isRMVB);
    Bunny(); // Default constructor

    // Getters
    std::string getGender() const {return gender;}
    std::string getColor() const {return color;}
    int getAge() const {return age;}
    std::string getName() const {return name;}
    bool getRMVB() const {return radioactive_mutant_vampire_bunny;}

    // Setters
    void setGender(std::string gend) {gender = gend;}
    void setColor(std::string col) {color = col;}
    void setAge(int years) {age = years;}
    void setName(std::string nam){name = nam;}
    void setRMVB(bool yn) {radioactive_mutant_vampire_bunny = yn;}

};
