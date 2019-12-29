#include <iostream>
#include <cstdlib>

int main() {
 
  // The magic starts now.
  // Initialize variables.
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
 
  // Answer results.
  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;
 
  // Answer house results.
  int max = 0;
  std::string house;
 
  // HP Art.
   const char* const hplogo =
    R"(
                   ..''..                  
            .:dxl. 'ONXl.                  
             oWM0' .OMN:                    
             lWM0' .kMN:                    
             cNM0' .kMNd;,.                
          ;c.cNMK:.lKMWd,:dxdl,'.          
          .;ckWMNklo0MN: .kMMNdlOx.        
             cNMX: .dMN: .oWMK,.xWK;        
             :XMX; .dMNc  :XMK, oWWo        
            .oNMX: .xMNc  ,KMXc'xWNl        
            .;ccc'.;0WNo';kNMNOkXW0,        
                   .'','.,OMMXl;c;.        
                          dWWX:            
                         .xWNo.            
                         .xMNc              
                          lX0,              
                          ;k:              
                          .c'              
                           ..              

    )" ;
   
  std::cout << hplogo;
  std::cout << "\n\nWelcome to The Sorting Hat Quiz!";
 
  // Question #1
  std::cout << """\n\nQ1) When I'm dead, I want people to remember me as:\n\n  1) The Good\n  2) The Great\n  3) The Wise\n  4) The Bold""";
 
  std::cout << "\n\nPlease select your answer number: ";
 
  std::cin >> answer1;
 
  if (answer1 == 1) {
   
    hufflepuff = hufflepuff + 1;
   
  }
  else if (answer1 == 2) {
   
    slytherin = slytherin + 1;
   
  }
  else if (answer1 == 3) {
   
    ravenclaw = ravenclaw + 1;
   
  }
  else if (answer1 == 4) {
   
    gryffindor = gryffindor + 1;
   
  }
  else {
   
    std::cout << "Invalid input.";
   
  }
 
  // Question #2
  std::cout << """\n\nQ2) Dawn or Dusk?\n\n  1) Dawn\n  2) Dusk""";
 
  std::cout << "\n\nPlease select your answer number: ";
 
  std::cin >> answer2;
 
  if (answer2 == 1) {
   
    gryffindor = gryffindor + 1;
    ravenclaw = ravenclaw + 1;
   
  }
  else if (answer2 == 2) {
   
    slytherin = slytherin + 1;
    hufflepuff = hufflepuff + 1;
   
  }
  else {
   
    std::cout << "Invalid input.\n";
   
  }
 
  // Question #3
  std::cout << """\n\nQ3) Which kind of instrument most pleases your ear?\n\n  1) The violin\n  2) The trumpet\n  3) The piano\n  4) The drum""";
 
  std::cout << "\n\nPlease select your answer number: ";
 
  std::cin >> answer3;
 
  if (answer3 == 1) {
   
    slytherin = slytherin + 1;
   
  }
  else if (answer3 == 2) {
   
    hufflepuff = hufflepuff + 1;
   
  }
  else if (answer3 == 3) {
   
    ravenclaw = ravenclaw + 1;
   
  }
  else if (answer3 == 4) {
   
    gryffindor = gryffindor + 1;
   
  }
  else {
   
    std::cout << "Invalid input.";
   
  }
 
   // Question #4
  std::cout << """\n\nQ4) Which road tempts you most?\n\n  1) The wide, sunny grassy lane\n  2) The narrow, dark, lantern-lit alley\n  3) The twisting, leaf-strewn path through woods\n  4) The cobbled street lined (ancient buildings)""";
 
  std::cout << "\n\nPlease select your answer number: ";
 
  std::cin >> answer4;
 
  if (answer4 == 1) {
   
    hufflepuff = hufflepuff + 1;
   
  }
  else if (answer4 == 2) {
   
    slytherin = slytherin + 1;
   
  }
  else if (answer4 == 3) {
   
    gryffindor = gryffindor + 1;
   
  }
  else if (answer4 == 4) {
   
    ravenclaw = ravenclaw + 1;
   
  }
  else {
   
    std::cout << "Invalid input.";
   
  }
 
  // Find the max.
  if (gryffindor > max) {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max) {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max) {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max) {

    max = slytherin;
    house = "Slytherin";

  }
 
  // Output final house.
  std::cout << "\n\nYour house is:\n";
  std::cout << house << "!\n";
  std::cout << hplogo;

}