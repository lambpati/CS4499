#include <fstream>
#include <iostream>
#include <string>
#include "ReadNames.hh"
#include <vector>


ReadNames::ReadNames(std::vector<std::string> v, std::string nam):
  allNames(v), names(nam){
  std::ifstream bunnynames;
  allNames.resize(101,"Placeholder");
  bunnynames.open("bunnynamesbetter.txt", std::fstream::in);
  while (bunnynames.is_open()) {
    for(auto i = 0; i < allNames.size(); i++){
      std::getline(bunnynames,allNames[i]);
    }
      bunnynames.close();
  }
}
ReadNames::ReadNames(){
  std::ifstream bunnynames;
  allNames.resize(101,"Placeholder");
  bunnynames.open("bunnynamesbetter.txt", std::fstream::in);
  while (bunnynames.is_open()) {
    for(auto i = 0; i < allNames.size(); i++){
      std::getline(bunnynames,allNames[i]);
    }
    bunnynames.close();
  }
}

void ReadNames::read(int lineNum){
  names = allNames.at(lineNum);
}
