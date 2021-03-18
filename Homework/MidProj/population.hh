#pragma once
#include "Bunny.hh"
#include "Driver.hh"
#include "Population.hh"
#include "FileOut.hh"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>


class Population {
  private:
    std::vector<Bunny> bunnies;
    Driver driver;
    int population;

  public:
    //Constructors
    Population(std::vector<Bunny> bunny, Driver drive);
    Population();

    //Getters
    std::vector<Bunny> getAllBunnies() const {return bunnies;}

    //Methods
    int isBorn();
    bool isDead(int k);
    int killB();
    void convertToRMVB();
    void start(int num);
    void initialize();
    std::string chooseColor(Bunny bunny1, Bunny bunny2);
    std::vector<Bunny> canReproduce();
    Bunny makeBaby();
    std::vector<size_t> IsNotRMVB();
    int IsRMVB();
    void toConsole(Bunny bunny);
    int age1year(Bunny bunny);
    int isAge(int age);
};
