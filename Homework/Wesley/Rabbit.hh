#pragma once

#include <string>

class Rabbit{
  private:
    std::string sex;
    std::string color;
    int age;
    std::string names;
    bool radioactive;

  public:
    Rabbit(std::string gender, std::string col, int year, std::string name, bool rad);
    Rabbit();

    void setGender(std::string gender) {sex = gender;}
    void setColor(std::string col) {color = col;}
    void setAge(int years) {age = years;}
    void setName(std::string nam){names = nam;}
    void setRad(bool rad) {radioactive = rad;}

    std::string getGender() const {return sex;}
    std::string getColor() const {return color;}
    int getAge() const {return age;}
    std::string getName() const {return names;}
    bool getRad() const {return radioactive;}
};
