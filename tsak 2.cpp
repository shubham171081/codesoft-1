#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    srand(time(0));


    int secretNumber = rand() % 5 + 1;

    int guess;

    std::cout << "Guess a number between 1 and 5: ";
    std::cin >> guess;

   
    if (guess == secretNumber) {
        std::cout << " Congratulations! You guessed the correct number." << std::endl;
    } else {
        std::cout << " Sorry, the correct number was " << secretNumber << ". Try again!" << std::endl;
    }

    return 0;
}
