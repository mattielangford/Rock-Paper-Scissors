# include <iostream> 
# include <stdlib.h>

	int main ()

  { int user;
   	int computer;
    
    std::cout << "Time for some rock paper scissors!\n";
    
    std::cout << " 1) Rock\n 2) Paper\n 3) Scissors\n";
    std::cin >> user;
    
    
   if (rand() % 3 +1 == 1) {
     std::cout << "The computer chose Rock\n";
     computer = 1;
   } else if (rand() % 3 + 1 == 2) {
     std::cout << "The computer chose Paper\n";
     computer = 2;
   } else if (rand() % 3 + 1 == 3) {
     std::cout << "The computer chose Scissors\n";
     computer = 3;
   }
   
  std::cout << "============================\n";
   
   if (computer == 1 && user == 1) {
     std::cout << "It is a tie!\n";
   } else if (computer == 1 && user == 2) {
     std::cout << "You win!\n";
   } else if (computer == 1 && user == 3) {
     std::cout << "The computer beat you, better luck next time!\n";
   } else if (computer == 2 && user == 1) {
     std::cout << "The computer wins!\n";
   } else if (computer == 2 && user == 2) {
     std::cout << "It is a tie!\n";
   } else if (computer == 2 && user == 3) {
     std::cout << "You win!\n";
   } else if (computer == 3 && user == 1) {
     std::cout << "You win!\n";
   } else if (computer == 3 && user == 2) {
     std::cout << "The computer wins!\n";
   } else if (computer == 3 && user == 3) {
     std::cout << "It is a tie!\n";
   } else {
     std::cout << "Invalid input was recieved.\n";
   }
	
 
    
    
    
    
    
    
    
    
  } 
