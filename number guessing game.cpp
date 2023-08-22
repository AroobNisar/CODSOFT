#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    
    int targetNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;
    int attempts = 0;
    cout<<endl;
    cout << "                                 Welcome to the Guess the Number game!" << endl;
   
    Sleep(5000);
    cout<<endl;
    cout << "                       I'm thinking of a number between 1 and 100. Can you guess it?" << endl;
    Sleep(5000);
    while (true) {
    	cout<<endl;
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;
        
        if (userGuess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << targetNumber << " in " << attempts << " attempts." << endl;
            break;
        }
    }
    
    return 0;
}

