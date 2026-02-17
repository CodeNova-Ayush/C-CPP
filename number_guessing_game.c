#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    cout << "Guess number (1-100): ";

    do {
        cin >> guess;

        if (guess > number)
            cout << "Too high!\n";
        else if (guess < number)
            cout << "Too low!\n";
        else
            cout << "Correct! You win!\n";

    } while (guess != number);

    return 0;
}
