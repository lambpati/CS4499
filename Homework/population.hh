#pragma once
#include "Bunny.hh"
#include "Driver.hh"


class Population {
  private:
    std::vector<Bunny> bunnies;
    int population;

  public:
    //Constructors
    Population(std::vector<Bunny> bunny);
    Population();

    //Getters
    std::vector<Bunny> getAllBunnies(){return bunnies;}
    int getPopulation(){return population;}

    //Setters
    void setPopulation(int pop){population = pop;}

    //Methods
    void isBorn(Bunny bunny);
    bool isDead(Bunny bunny);
    void kill();
    void addAYear(Bunny bunny);
    void convertToRMVB();
    void start();
};
