#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessNumber() {
    srand(time(0)); // Seed random number generator
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "Welcome to Number Guessing Game!" << endl;
    cout << "I have picked a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed the number in " 
                 << tries << " tries." << endl;
        }
    } while (guess != number);
}

int main() {
    guessNumber();
    return 0;
}
