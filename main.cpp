#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string generateSecretNumber() {
    string number;
    srand(time(nullptr));
    for (int i = 0; i < 4; ++i) {
        number += '0' + rand() % 10;
    }
    return number;
}

void countBullsAndCows(const string& secret, const string& guess, int& bulls, int& cows) {
    bulls = 0;
    cows = 0;
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == secret[i]) {
            bulls++;
        }
        else if (secret.find(guess[i]) != string::npos) {
            cows++;
        }
    }
}

void playGame(const string& secret, int attempts) {
    string guess;
    cout << "Enter your guess (4 digits): ";
    cin >> guess;

    if (guess.length() != 4) {
        cout << "Invalid input. Please enter exactly 4 digits." << endl;
        playGame(secret, attempts);
        return;
    }

    for (char c : guess) {
        if (!isdigit(c)) {
            cout << "Invalid input. Please enter only digits." << endl;
            playGame(secret, attempts);
            return;
        }
    }

    int bulls, cows;
    countBullsAndCows(secret, guess, bulls, cows);

    cout << "Bulls: " << bulls << ", Cows: " << cows << endl;

    if (bulls == 4) {
        cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
    }
    else {
        playGame(secret, attempts + 1);
    }
}

int main() {
    string secret = generateSecretNumber();
    cout << "-----Welcome!-----" << endl;
    cout << "I have guessed a 4-digit number. Try to guess it!" << endl;

    playGame(secret, 1);

    return 0;
}
