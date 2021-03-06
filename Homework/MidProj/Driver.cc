#include "Driver.hh"
#include "ReadNames.hh"
#include <random>


Driver::Driver(std::string gend, std::string col, std::string nam, bool isRMVB):
gender(gend), color(col), name(nam), radioactive_mutant_vampire_bunny(isRMVB)
{

  }

  Driver::Driver(){}


  int Driver::generateNumber() {
    std::random_device rd;
    std::minstd_rand0 generator(rd());
    std::uniform_int_distribution<int> dist(0,100);
    return dist(generator);
  }

  void Driver::generateGender(){
    int  n = generateNumber();
      if (n < 47){
        gender = "M";
      }
      else if (n < 94){
        gender = "F";
      }
      else {
        gender = "X";
      }
    }

    void Driver::generateColor(){
      int n = generateNumber();
        if (n < 25){
          color = "White";
        }
        else if(n < 50){
          color = "Brown";
        }
        else if(n < 75){
          color = "Spotted";
        }
        else {
          color = "Black";
        }
      }

    void Driver::generateRMVB(){
      int n = generateNumber();
        if (n < 3){
          radioactive_mutant_vampire_bunny = 1;
        }
        else {
          radioactive_mutant_vampire_bunny = 0;
        }
      }

      void Driver::generateName(){
        int n = generateNumber();
        ReadNames input;
        input.read(n);
        name = input.getName();
      }

      bool Driver::chooseBetween(){
        int n = generateNumber();

        // If 1, choose first bunny's color
        if(n < 50){
          return 1;
        }

        // If 0 choose second bunny's color
        return 0;

      }
