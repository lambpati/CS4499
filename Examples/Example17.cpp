// File IO

#include <iostream>
#include <string>
#include <fstream> // File handling (ifstream, ofstream)

using namespace std;

int main(int argc, char const *argv[]) {
  ifstream input;
  ofstream output;
  int x;
  string next;
  string line;

  input.open("input.txt", fstream::in);
  input >> x; //Read an int from input.txt into x
  cout << "x: " << x << endl;
  input >> next;
  cout << "next: " << next << '\n';
  //input.getline(line,10);
//  cout << "line: " << line << endl;
  input.close();

  output.open("output.txt",fstream::app);
  output << "New number: " << 14323 << endl;

  output.close();
  return 0;
}
