#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using std::cout, std:: endl, std::string, std::cin;

string options[] = {"rock", "paper", "scissors"};
int userScore = 0;
int compScore = 0;

void rps(string user, string comp){ // Rock paper scissors - calculates winner

    if (user == comp){
        cout << "It's a tie! " << user << " = " << comp << endl;

    } else if (user == "rock" && comp == "paper") {
        compScore += 1;
        cout << "You lose. " << comp << " beats " << user << endl;
    } else if (user == "rock" && comp == "scissors") {
        userScore += 1;
        cout << "You Win! " << user << " beats " << comp << endl;

    } else if (user == "paper" && comp == "scissors") {
        compScore += 1;
        cout << "You lose. " << comp << " beats " << user << endl;
    } else if (user == "paper" && comp == "rock") {
        userScore += 1;
        cout << "You Win! " << user << " beats " << comp << endl;

    } else if (user == "scissors" && comp == "rock") {
        compScore += 1;
        cout << "You lose. " << comp << " beats " << user << endl;
    } else if (user == "scissors" && comp == "paper") {
        userScore += 1;
        cout << "You Win! " << user << " beats " << comp << endl;
    }
}


int main() {
    

    while (true){
        string computer = options[rand() % 3]; // chooses random choice from Rock Paper Scissors

        // user input
        cout << endl << "rock -OR- paper -OR- scissors -OR- done: ";
        string userChoice;
        cin >> userChoice;

        bool valid = false; // checks for validity of input 
        
        if(userChoice == "done"){  
            cout << endl  << "Your score: " << userScore << endl << "My score: " << compScore << endl; // display scores
            break;
        } else {
            for(int i = 0; i < 3; i++){
                if (options[i] == userChoice){ // checks for winner after validity is confirmed
                    rps(userChoice, computer); 
                    valid = true;
                }
            } 
            if (!valid){
                    cout << "Invalid input. try again." << endl;
                    continue;
            }
        }

    }
    return 0; 
}