// This program will play Rock, Paper, Scissors, Lizard, Spock.
// https://d3qdvvkm3r2z1i.cloudfront.net/media/catalog/product/cache/1/image/1800x/6b9ffbf72458f4fd2d3cb995d92e8889/r/o/rockpaperscissorslizardspock_newthumb.png

#include <iostream>
#include <stdlib.h>

int main() {
  
  // Live long and prosper.
  srand (time(NULL));
  
  // Initialize variables.
  int computer = rand() % 3 + 1;
  int user_input = 0;
	bool play_again;
	int num_games = 0;
	int player_wins = 0;
	int computer_wins = 0;
	std::string play_input;
  
  // HP Art.
  const char* const game_begin_art =
  R"(
    MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
    MMMMMMMMWX00KNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
    MMMMMMMNo;:c:;l0WMMMMMMMMMMMMMMMMMMWX0OkOKWMMMMMM
    MMMMMMMk'cXWNx',0MMMMMMMMMMMMMMWXkl,...,o0WMMMMMM
    MMMMMMMXc,cx00;.kMMMMMMMMMMMWKx:.  .;oONMMMMMMMMM
    MMMMMMMMNOo:,.  :0NMMMMMNX0d;.  .cxKWMMMMMMMMMMMM
    MMMMMMMMMMMWKkl,..,oKXOo,.. .,oOXWMMMMMMMMMMMMMMM
    MMMMMMMMMMMMMMMNKd:;;'  .':d0WMMMMMMMMMMMMMMMMMMM
    MMMMMMMMMMMMMMWKx:...,c:,,;lkXWMMMMMMMMMMMMMMMMMM
    MMMMMMMMMMMNOo:,. .dKNW0l:,. .:d0NMMMMMMMMMMMMMMM
    MMMMMMMWXxl::lk0d.:NMMMMMWNOo,. .,lkXWMMMMMMMMMMM
    MMMMMMXo,;d0NMWKc.oWMMMMMMMMMN0o,.  .:dKNMMMMMMMM
    MMMMMMK;.xXXKkl,;xNMMMMMMMMMMMMMW0o;...,lOWMMMMMM
    MMMMMMWKo:::;:lkNMMMMMMMMMMMMMMMMMMWXKKKXNWMMMMMM
    MMMMMMMMWNXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
    MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
  )" ;

  std::cout << game_begin_art;

    // Ask the user if they would like to play.
    std::cout << "\n\n===========================================================\n";
    std::cout << "Would you like to play Rock, Paper, Scissors? (y or n): ";
    std::cin >> play_input;

    // If they answer yes, then play, otherwise no.
    if(play_input == "y" || play_input == "Y"){

      play_again = true;
      num_games++;
      
      }
  
	// Start playing the actual game if they want to play.
	while(play_again != false){

    std::cout << "===========================================================\n";
    std::cout << "                Rock, Paper, Scissors!\n";
    std::cout << "===========================================================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "Pick your answer: ";
    std::cin >> user_input;

    std::cout << "shoot! \n";

    if (user_input == 1 && computer == 1) {

      std::cout << "It's a tie";

    }
    else if (user_input == 1 && computer == 2) {

      std::cout << "You lost";

    }
    else if (user_input == 1 && computer == 3) {

      std::cout << "You win!";

    }
    else if (user_input == 2 && computer == 1) {

      std::cout << "You win!";

    }
    else if (user_input == 2 && computer == 2) {

      std::cout << "It's a tie";

    }
    else if (user_input == 2 && computer == 3) {

      std::cout << "You lost";

    }
      else if (user_input == 3 && computer == 1) {

      std::cout << "You lost";

    }
    else if (user_input == 3 && computer == 2) {

      std::cout << "You win!";

    }
    else if (user_input == 3 && computer == 3) {

      std::cout << "It's a tie";

    }

    std::cout << "You have played " << num_games << " games!";
    std::cout << "\n\n";
    
    // Ask if the player would like to play again.
		std::cout << "\nWould you like to play again?: ";
    std::cin >> play_input;
		
		// Exit the loop if the player chooses no.
		if (play_input == "n" || play_input == "N"){

			play_again = false;

			}
		else if (play_input == "y" || play_input == "Y"){

			num_games++;

			}
		
  }
  
  
}

