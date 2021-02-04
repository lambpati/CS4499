// Example 6
// Vectors
// Patience Lamb

#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> iv(10); // Create integer vector iv with size 10
  vector<int> iv2(10,0); // Initialize all elements to 0
  cout << "iv: " << '\n';
  for(int i = 0; i < iv.size(); i++){
    iv.at(i) = i + 1;
    cout << "iv[" << i << "] = " << iv.at(i) << endl;
  }

  cout << "iv2: " << '\n';
  for(int i = 0; i < iv2.size(); i++){
    cout << "iv2[" << i << "] = " << iv2.at(i) << endl;
  }

  cout << "Max size: " << iv.max_size() << endl; //Maximum number of elements
  // a container can hold

  vector<int> grades;
  int num_students;
  cout << "Size: " << grades.size() << endl;
  cout << "Enter number of students: ";
  cin >> num_students;
  grades.resize(num_students);
  cout << "Size now: " << grades.size() << endl;

  int grade;
  grades.resize(0);
  do {
    cout << "Enter integer grade (0 to exit): ";
    cin >> grade;
    grades.push_back(grade); // Insert element at back
  } while(grade != 0);
  grades.pop_back(); //Deletes last element
  cout << "Size now: " << grades.size() << endl;

  cout << "grades: " << '\n';
  for(int i = 0; i < grades.size(); i++){
    cout << "grades[" << i << "] = " << grades.at(i) << endl;
  }
  return 0;
}
