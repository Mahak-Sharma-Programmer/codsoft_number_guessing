#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    int secretNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try a smaller number.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try a bigger number.\n";
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
