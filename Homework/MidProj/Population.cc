#include "Bunny.hh"
#include "Driver.hh"
#include "Population.hh"
#include "FileOut.hh"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>


Population::Population(std::vector<Bunny> bunny, Driver drive):
  bunnies(bunny), driver(drive){}
Population::Population(){}

void Population::initialize(){
  for (size_t i = 0; i < 10; i++) {
    Bunny bunny = makeBaby();
    driver.generateColor();
    bunny.setColor(driver.getColor());
    toConsole(bunny);
    bunnies.push_back(bunny);
  }
}

  int Population::age1year(Bunny bunny){
    return bunny.getAge()+1;
  }

void Population::start(int timesCalled){
  std::stringstream buffer;
  FileOut fileOut;
  for(int i = 0; i < bunnies.size(); i++){
    int age = age1year(bunnies.at(i));
    bunnies.at(i).setAge(age);
  }
  buffer << "Round " << timesCalled << '\n';
  int bAge;
  for(int age = 0; age <= 50; age++){
    int count = 0;
    for(int i = 0; i < bunnies.size(); i++){
      if(bunnies.at(i).getAge() == age){
        count++;
      }
    }
    buffer << "Amount of bunnies at age " << age << ": " << count << '\n';
  }
  int born = isBorn();
  int converted = IsRMVB();
  convertToRMVB();
  int dead = killB();
  int numBunnies = bunnies.size();
  int female = count_if(bunnies.begin(),bunnies.end(), [](auto females){return (females.getGender() == "F");});
  int male = count_if(bunnies.begin(),bunnies.end(), [](auto males){return (males.getGender() == "M");});
  int x = count_if(bunnies.begin(),bunnies.end(), [](auto xs){return (xs.getGender() == "X");});
  buffer << "Amount of bunnies: " << numBunnies << '\n';
  buffer << "Amount of females: " << female << " amount of males: " << male << " amount of GenderX: " << x << '\n';
  buffer << "Amount of bunnies died: " << dead << '\n';
  buffer << "Amount of bunnies born: "<< born << '\n';
  buffer << "Amount of bunnies converted: "<< converted << '\n';
  fileOut.writeOutput(buffer.str());
}

bool Population::isDead(int k){

  if(bunnies.at(k).getAge() >= 10 && bunnies.at(k).getRMVB() == 0){
      return 1;
  }
  else if(bunnies.at(k).getAge() >= 50 && bunnies.at(k).getRMVB() == 1){
    return 1;
  }
  return 0;
}

int Population::killB(){
  int bunniesDead = 0;
  std::stringstream buffer;
  FileOut fileOut;
  std::vector<Bunny>::iterator values = bunnies.begin();
  while(values != bunnies.end()){
      if(values->getAge() >= 10 && values->getRMVB() == 0){
        buffer << "Bunny " << values->getName() << " died at age " << values->getAge() << '\n';
        fileOut.writeOutput(buffer.str());
        bunniesDead++;
        bunnies.erase(values);
      }
      else if(values->getAge() >= 50 && values->getRMVB() == 1){
        buffer << "Bunny " << values->getName() << " died at age " << values->getAge() << '\n';
        fileOut.writeOutput(buffer.str());
        bunniesDead++;
        bunnies.erase(values);

      }
      else{
        values++;
      }
    }
  return bunniesDead;
}
  int Population::isBorn(){
    int amountBorn = 0;
    std::vector<Bunny> reproduce = canReproduce();
    for (auto i = 0; i < reproduce.size()-1 && !reproduce.empty(); i++) {
        reproduce = canReproduce();
        Bunny bunny1 = reproduce.at(i);
        Bunny bunny2 = reproduce.at(i+1);
        if((bunny1.getGender() == "F" && bunny2.getGender() == "M") || (bunny1.getGender() == "M" && bunny2.getGender() == "F")){
          Bunny baby = makeBaby();
          std::string color = chooseColor(bunny1,bunny2);
          baby.setColor(color);
          toConsole(baby);
          amountBorn++;
          bunnies.push_back(baby);
          i += 2;
        }
        else if((bunny1.getGender() == "X" && bunny2.getGender() == "M") || (bunny1.getGender() == "M" && bunny2.getGender() == "X")){
          bool isSuccess = driver.chooseBetween();
          if(isSuccess){
            Bunny baby = makeBaby();
            std::string color = chooseColor(bunny1,bunny2);
            baby.setColor(color);
            toConsole(baby);
            amountBorn++;
            bunnies.push_back(baby);
            i += 2;
          }
        }
          else if((bunny1.getGender() == "X" && bunny2.getGender() == "F") || (bunny1.getGender() == "F" && bunny2.getGender() == "X")){
            bool isSuccess = driver.chooseBetween();
            if(isSuccess){
              Bunny baby = makeBaby();
              std::string color = chooseColor(bunny1,bunny2);
              baby.setColor(color);
              toConsole(baby);
              amountBorn++;
              bunnies.push_back(baby);
              i += 2;
          }
        }
    }
    return amountBorn;
  }
    std::string Population::chooseColor(Bunny bunny1, Bunny bunny2){
      bool color = driver.chooseBetween();
      if(color == 1){
        return bunny1.getColor();
      }
      return bunny2.getColor();
    }

    std::vector<Bunny> Population::canReproduce(){
      std::vector<Bunny> reproducable;
      for(size_t i = 0; i < bunnies.size(); i++){
      if(bunnies[i].getAge() <= 8){
        if(bunnies[i].getAge() >= 2){
          if(!bunnies[i].getRMVB()){
            reproducable.push_back(bunnies[i]);
          }
        }
      }
    }
    return reproducable;
  }

    Bunny Population::makeBaby(){
      Bunny baby;
      driver.generateGender();
      baby.setGender(driver.getGender());
      driver.generateRMVB();
      baby.setRMVB(driver.getIsRMVB());
      driver.generateName();
      baby.setName(driver.getName());

      return baby;
    }

    void Population::convertToRMVB(){
      IsRMVB();
      std::vector<size_t> normBunnies = IsNotRMVB();
      for (size_t i = 0; i < IsRMVB() && !normBunnies.empty(); i++) {
        int pos = driver.generateNumber()%normBunnies.size();
        bunnies[normBunnies[pos]].setRMVB(1);
        normBunnies.erase(normBunnies.begin()+pos);
        i++;
      }
}
    std::vector<size_t> Population::IsNotRMVB(){
      std::vector<size_t> normBunnies;
      for(size_t i = 0; i < bunnies.size(); i++){
        if(!bunnies.at(i).getRMVB()){
          normBunnies.push_back(i);
        }
      }
      return normBunnies;
    }
    int Population::IsRMVB(){
      int amountMutant = 0;
      for(Bunny b: bunnies){
        if(b.getRMVB()){
          amountMutant++;
        }
      }
      return amountMutant;
    }

    void Population::toConsole(Bunny baby){
      std::stringstream buffer;
      FileOut fileOut;
      buffer<< "Bunny "<< baby.getName() << " " << baby.getGender() << " "<< baby.getColor() << " " << baby.getRMVB() << " was born!\n";
      fileOut.writeOutput(buffer.str());
    }
