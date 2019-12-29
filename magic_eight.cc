#include <iostream>
#include <cstdlib>
#include <string>

int main() {
 
  // Your future is here.
  std::cout << "MAGIC 8-BALL:\n";
 
  // Set seed of random number generator.
  srand(time(NULL));
  int answer = std::rand() % 10;
 
  if (answer == 0) {
   
    std::cout << "It is certain.";
   
  }
  else if (answer == 1) {
   
    std::cout << "You may rely on it.";
   
  }
  else if (answer == 2) {
   
    std::cout << "As I see it, yes.";
   
  }
  else if (answer == 3) {
   
    std::cout << "Reply hazy, try again.";
   
  }
  else if (answer == 4) {
   
    std::cout << "Better not tell you now.";
   
  }
  else if (answer == 5) {
   
    std::cout << "My reply is no.";
   
  }
  else if (answer == 6) {
   
    std::cout << "Outlook not so good.";
   
  }
  else if (answer == 7) {
   
    std::cout << "It is decidedly so.";
   
  }
  else if (answer == 8) {
   
    std::cout << "Yes.";
   
  }
  else if (answer == 9) {
   
    std::cout << "Signs point to yes.";
   
  }
  else {
   
    std::cout << "Very doubtful.";
   
  }
}