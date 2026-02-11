#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// Function to generate a random number between 1 and 100
int generateRandomNumber() {
    srand(time(0)); // Seed for random number generation
    return (rand() % 100) + 1;
}

int main() {
    int secretNumber = generateRandomNumber(); // Generate a random secret number
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You found the secret number in " << attempts << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too Low! Try again." endl;
        } else {
            cout << "Too High! Try again." << endl;
        }
    }

    return 0;
}