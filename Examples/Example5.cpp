// Example 5
// Strings
// Patience Lamb

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  //char greeting[6] = { 'h','e','l','l','o','\0'}; // C-style string
  std::string greeting;
  std::string second_greeting;
  greeting = "Hello world";

  std::cout << greeting << '\n';
  second_greeting = greeting + "!!";

  std::cout << second_greeting << '\n';
  std::cout << second_greeting.length() << '\n';


// Can utilize [] operator in string class to access characters
  for (size_t i = 0; i < greeting.length(); i++) {
    std::cout << greeting[i] << '\n';
  }
  // Not best practice, [] doesn't check for out of bounds
  // std::cout << "Out of bounds access: " << greeting[100] << '\n';
  // std::cout << "Bound checking access: " << greeting.at(100) << '\n';

  if(greeting == second_greeting){
    std::cout << "Greetings are the same" << '\n';
  }

  // Gives result of the difference of the character lengths
  // Returns 0 if strings match, positive if string is greater/longer and
  // negative if strong is shorter/less than
  std::cout << "Results of comparison: " << second_greeting.compare(greeting)
  << '\n';

  std::string sentence = "Yes, we went to Applebees after we left the football game";
  int firstWe = sentence.find("we ");
  std::cout << firstWe << '\n';
  std::cout << sentence.at(firstWe) << '\n';

  // If you get rid of the space, it finds the "went"
  int secondWe = sentence.find("we ", firstWe + 1);
  std::cout << secondWe << '\n';

  // Returns a -1 if not found
  int thirdWe = sentence.find("we ", secondWe + 1);
  std::cout << std::string::npos << std::endl;
  std::cout << thirdWe << '\n';

  std::cout << "Is A in our sentence?" << '\n';
  if(sentence.find("A") >= 0){
    std::cout << "Yes." << '\n';
  }
  else {
    std::cout << "No." << '\n';
  }

  // Shorter way using ternary operator:
  std::cout << (sentence.find("A") >= 0 ? "Yes." : "No.") << '\n';


  return 0;
}
