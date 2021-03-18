#include "Rabbit.hh"
#include "Warren.hh"
#include "FileOut.hh"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <random>
#include <fstream>

Warren::Warren(std::vector<Rabbit> rabbit):
bunnies(rabbit){}
Warren::Warren(){}

void Warren::initialize(){
  for (size_t i = 0; i < 10; i++) {
    Rabbit rabbit = copulate();
    makePattern();
    rabbit.setColor(getColor());
    toFile(rabbit);
    bunnies.push_back(rabbit);
  }
}
int Warren::randomNum() {
  std::random_device rd;
  std::minstd_rand0 generator(rd());
  std::uniform_int_distribution<int> dist(0,100);
  return dist(generator);
}

void Warren::setSex(){
  int  n = randomNum();
    if (n < 47){
      sex = "M";
    }
    else if (n < 94){
      sex = "F";
    }
    else {
      sex = "X";
    }
  }

  void Warren::makePattern(){
    int n = randomNum()%4;
      switch (n) {
        case  0:
        color = "Brown";
        break;
        case  1:
        color = "Black";
        break;
        case  2:
        color = "White";
        break;
        case  3:
        color = "Spotted";
        break;
      }
    }

  void Warren::Rad(){
    int n = randomNum();
      if (n < 3){
        radioactive = 1;
      }
      else {
        radioactive = 0;
      }
    }

    void Warren::readName(){
      std::ifstream bunnynames;
      names.resize(101,"Placeholder");
      bunnynames.open("bunnynamesbetter.txt", std::fstream::in);
      while (bunnynames.is_open()) {
        for(auto i = 0; i < names.size(); i++){
          std::getline(bunnynames,names[i]);
        }
        bunnynames.close();
      }
    }

    bool Warren::booleans(){
      int n = randomNum();
      if(n < 50){
        return 1;
      }
      return 0;
    }


  int Warren::addYear(Rabbit rabbit){
    return rabbit.getAge()+1;
  }

void Warren::begin(int timesCalled){
  std::stringstream output;
  FileOut fileOut;
  for(int i = 0; i < bunnies.size(); i++){
    int age = addYear(bunnies.at(i));
    bunnies.at(i).setAge(age);
  }
  output << "Round " << timesCalled << '\n';
  int bAge;
  for(int age = 0; age <= 50; age++){
    int count = 0;
    for(int i = 0; i < bunnies.size(); i++){
      if(bunnies.at(i).getAge() == age){
        count++;
      }
    }
    output << "Number of bunnies at age " << age << ": " << count << '\n';
  }
  int born = birth();
  int converted = countRad();
  makeRad();
  int die = dead();
  int numBunnies = bunnies.size();
  output << "Number of bunnies: " << numBunnies << '\n';
  output << "Number of bunnies died: " << die << '\n';
  output << "Number of bunnies born: "<< born << '\n';
  output << "Number of bunnies converted: "<< converted << '\n';
  fileOut.writeOutput(output.str());
}

bool Warren::died(int k){

  if(bunnies.at(k).getAge() >= 10 && bunnies.at(k).getRad() == 0){
      return 1;
  }
  else if(bunnies.at(k).getAge() >= 50 && bunnies.at(k).getRad() == 1){
    return 1;
  }
  return 0;
}

int Warren::dead(){
  int bunniesDead = 0;
  std::stringstream output;
  FileOut fileOut;
  std::vector<Rabbit>::iterator values = bunnies.begin();
  while(values != bunnies.end()){
      if(values->getAge() >= 10 && values->getRad() == 0){
        output << "Rabbit " << values->getName() << " died at age " << values->getAge() << '\n';
        fileOut.writeOutput(output.str());
        bunniesDead++;
        bunnies.erase(values);
      }
      else if(values->getAge() >= 50 && values->getRad() == 1){
        output << "Rabbit " << values->getName() << " died at age " << values->getAge() << '\n';
        fileOut.writeOutput(output.str());
        bunniesDead++;
        bunnies.erase(values);

      }
      else{
        values++;
      }
    }
  return bunniesDead;
}
  int Warren::birth(){
    int NumberBorn = 0;
    std::vector<Rabbit> reproduce = mate();
    for (auto i = 0; i < reproduce.size()-1 && !reproduce.empty(); i++) {
        reproduce = mate();
        Rabbit rabbit1 = reproduce.at(i);
        Rabbit rabbit2 = reproduce.at(i+1);
        if((rabbit1.getGender() == "F" && rabbit2.getGender() == "M") || (rabbit1.getGender() == "M" && rabbit2.getGender() == "F")){
          Rabbit baby = copulate();
          std::string color = parentalColor(rabbit1,rabbit2);
          baby.setColor(color);
          toFile(baby);
          NumberBorn++;
          bunnies.push_back(baby);
          i += 2;
        }
        else if((rabbit1.getGender() == "X" && rabbit2.getGender() == "M") || (rabbit1.getGender() == "M" && rabbit2.getGender() == "X")){
          bool isSuccess = booleans();
          if(isSuccess){
            Rabbit baby = copulate();
            std::string color = parentalColor(rabbit1,rabbit2);
            baby.setColor(color);
            toFile(baby);
            NumberBorn++;
            bunnies.push_back(baby);
            i += 2;
          }
        }
          else if((rabbit1.getGender() == "X" && rabbit2.getGender() == "F") || (rabbit1.getGender() == "F" && rabbit2.getGender() == "X")){
            bool isSuccess = booleans();
            if(isSuccess){
              Rabbit baby = copulate();
              std::string color = parentalColor(rabbit1,rabbit2);
              baby.setColor(color);
              toFile(baby);
              NumberBorn++;
              bunnies.push_back(baby);
              i += 2;
          }
        }
    }
    return NumberBorn;
  }
    std::string Warren::parentalColor(Rabbit rabbit1, Rabbit rabbit2){
      bool color = booleans();
      if(color == 1){
        return rabbit1.getColor();
      }
      return rabbit2.getColor();
    }

    std::vector<Rabbit> Warren::mate(){
      std::vector<Rabbit> reproducable;
      for(size_t i = 0; i < bunnies.size(); i++){
      if(bunnies[i].getAge() <= 8){
        if(bunnies[i].getAge() >= 2){
          if(!bunnies[i].getRad()){
            reproducable.push_back(bunnies[i]);
          }
        }
      }
    }
    return reproducable;
  }

    Rabbit Warren::copulate(){
      Rabbit baby;
      setSex();
      baby.setGender(getGender());
      Rad();
      baby.setRad(getRad());
      readName();
      baby.setName(getName());

      return baby;
    }

    void Warren::makeRad(){
      std::vector<size_t> normBunnies = notRad();
      for (size_t i = 0; i < countRad() && !normBunnies.empty(); i++) {
        int pos = randomNum()%normBunnies.size();
        bunnies[normBunnies[pos]].setRad(1);
        normBunnies.erase(normBunnies.begin()+pos);
      }
}
    std::vector<size_t> Warren::notRad(){
      std::vector<size_t> normBunnies;
      for(size_t i = 0; i < bunnies.size(); i++){
        if(!bunnies.at(i).getRad()){
          normBunnies.push_back(i);
        }
      }
      return normBunnies;
    }
    int Warren::countRad(){
      int NumberMutant = 0;
      for(Rabbit b: bunnies){
        if(b.getRad()){
          NumberMutant++;
        }
      }
      return NumberMutant;
    }

    void Warren::toFile(Rabbit baby){
      std::stringstream output;
      FileOut fileOut;
      output<< "Rabbit "<< baby.getName() << " " << baby.getGender() << " "<< baby.getColor() << " " << baby.getRad() << " was born!\n";
      fileOut.writeOutput(output.str());
    }
