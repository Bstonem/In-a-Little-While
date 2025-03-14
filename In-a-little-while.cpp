#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <string>
using namespace std;

int main() {
    
    // Get a different random number each time the program runs
    srand(time(0));
    // Generate a random number between 0 and 10
    int randomNum = (rand() % 10) + 1;
    int userGuess;

        cout << "Please guess a number between 1 and 10! ";
        cin >> userGuess;
    
   // Loop until correct guess
   while (userGuess != randomNum) {
    if (userGuess < randomNum) {
        cout << "Too low. Try again: ";
    } else {
        cout << "Too high. Try again: ";
    }
        cin >> userGuess;
    }
    
    // Message for correct guess by user.
        cout << "Congratulations! You guessed the correct number: " << randomNum << endl;
        cout << endl;

    // Next portion of program to enter secret password.
    string password = "opensesame";
    string passGuess;
        cout << "Now enter the secret password to continue! ";
        cin >> passGuess;
    // Loop for password entry attempts.
    while (passGuess != password) {
        cout << "Sorry, that's not it!  Try again. ";
        cin >> passGuess;

    }   
        // User message for entering correct password.
        cout << "Bingo, you have entered the correct password.";


     return 0; 
}