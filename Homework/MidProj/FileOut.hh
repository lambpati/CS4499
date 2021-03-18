#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class FileOut{
  private:
    std::string out;
  public:
    FileOut(std::string outp);
    FileOut();

    void writeOutput(std::string out);
};
