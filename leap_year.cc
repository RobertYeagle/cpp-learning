#include <iostream>

int main() {
 
  int input_int = 0;

  // Get user input.
  std::cout << "Please enter an integer year value: ";
  std::cin >> input_int;
 
  // Check user input if valid.
  if (std::to_string(input_int).length() !== 4) {

    std::cout << "Not a valid four-digit year";
   
  }
  // Determine if leap year.
  else if (input_int % 4 == 0 && input_int % 100 != 0 || input_int % 400 == 0) {

    std::cout << input_int;
    std::cout << " falls on a leap year.\n";
   
  }
  else {
   
    std::cout << input_int;
    std::cout << " is not a leap year.\n";
   
  }
}