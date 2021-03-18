#include <fstream>
#include <iostream>
#include <string>
#include "FileOut.hh"
#include <vector>


FileOut::FileOut(std::string outp):
  out(outp){}

FileOut::FileOut(){}

void FileOut::writeOutput(std::string out){
  std::ofstream output;
  output.open("output.txt",std::fstream::app);
  output << out;
  std::cout << out;
  output.close();
}
