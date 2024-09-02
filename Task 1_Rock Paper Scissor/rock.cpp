#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    int choice = rand() % 3;
    if (choice == 0) return "Rock";
    if (choice == 1) return "Paper";
    return "Scissors";
}

string getUserChoice() {
    string choice;
    cout << "Enter Rock, Paper, or Scissors: ";
    cin >> choice;
    return choice;
}

string determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) return "It's a tie!";
    if ((userChoice == "Rock" && computerChoice == "Scissors") ||
        (userChoice == "Paper" && computerChoice == "Rock") ||
        (userChoice == "Scissors" && computerChoice == "Paper")) {
        return "You win!";
    }
    return "Computer wins!";
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    string userChoice = getUserChoice();
    string computerChoice = getComputerChoice();

    cout << "Computer chose: " << computerChoice << endl;
    cout << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}

