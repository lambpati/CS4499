#pragma once
#include <fstream>
#include <string>
#include <vector>


class ReadNames{
  private:
    std::vector<std::string> allNames;
    std::string names;

  public:
    ReadNames(std::vector<std::string> v, std::string nam);
    ReadNames();

    //Getters
    std::string getName() const {return names;}
    // Methods
    void read(int lineNum);

};
