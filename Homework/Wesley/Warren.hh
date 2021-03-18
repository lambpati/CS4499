#pragma once
#include "Rabbit.hh"
#include "Warren.hh"
#include "FileOut.hh"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <random>
#include <vector>


class Warren {
  private:
    std::vector<Rabbit> bunnies;
    int population;
    std::string sex;
    std::string color;
    std::vector<std::string> names;
    std::string name;
    bool radioactive;

  public:
    //Constructors
    Warren(std::vector<Rabbit> rabbit);
    Warren();

    std::vector<Rabbit> getAllBunnies(){return bunnies;}

    std::string getColor(){return color;}
    std::string getName(){return name;}
    std::string getGender(){return sex;}
    bool getRad(){return radioactive;}


    int randomNum();
    void setSex();
    void Rad();
    void makePattern();
    void makeRad();
    void readName();
    bool booleans();
    int birth();
    bool died(int k);
    int dead();
    void begin(int num);
    void initialize();
    std::string parentalColor(Rabbit rabbit1, Rabbit rabbit2);
    std::vector<Rabbit> mate();
    Rabbit copulate();
    std::vector<size_t> notRad();
    int countRad();
    void toFile(Rabbit rabbit);
    int addYear(Rabbit rabbit);
};
