#include <iostream>
#include <cmath>
#include <string>
#include <cmath>
using namespace std;

double roundDciml(double num) { // rounds value to 2 decimal places
    return round(num * 100.0) / 100.0;
}

class BankAcct{ // stores global info and methods to modify this info
public:
    double balance;
    double gained_interest;

    void deposit(double amnt){
        balance = roundDciml(balance + amnt);
        cout << endl << "$" << amnt << " added to your balance! You now have $" << balance << endl;
    }

    void withdraw(double amnt){
        balance = roundDciml(balance - amnt);
        cout << endl << "$" << amnt << " removed from your balance. You now have $" << balance << endl;
        if (balance < 0){ // negative balance
            cout << "You'll owe the bank a negative balance fee." << endl;
        }
    }

    void interest(){
        gained_interest = roundDciml(balance * 0.03);
        if (gained_interest < 0){ // negative balance
            cout << endl << "You can't gain interest with a negative balance." << endl;
        } else {
            cout << endl << "You'll gain $" << gained_interest << " based on a 3% APY interest increase after a year!" << endl;
        }
    }
};

int main(){
    cout << endl << "Welcome to the ATM!";
    string opts[] = {"balance", "deposit", "withdraw", "interest(3% APY)", "exit"};
    int optSize = sizeof(opts) / sizeof(opts[0]);

    // create class object with default values
    BankAcct user;
    user.balance = 0.0;
    user.gained_interest = 0.0;

    while (true){
        cout << endl << "Type a NUMBER from the following options: " << endl;
        for (int i = 0; i < optSize; i++){ // displays options in numbered list format
            cout << i + 1 << "." << opts[i] << endl;
        }

        // user input
        cout << endl << "choice: ";
        int choice;
        cin >> choice;

        // router - runs method based on user choice
        if (choice == 0 || choice > optSize){ // invalid input (0 = string, >5 = out of range)
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // empties cin after checking validity
            cout << endl << "Whoops, that wasn't on the list. try again." << endl;
            continue;
        } else { // valid input
            if (choice == 1){ // display balance
                cout << endl << "You have $" << user.balance << endl;
                continue;
            }
            else if (choice == 2){ // deposit money
                cout << "How much would you like to deposit?: $";
                double deposit;
                cin >> deposit;
                user.deposit(deposit);
                continue;
            }
            else if (choice == 3){ // withdraw money

                cout << "How much would you like to withdraw?: $";
                double withdraw;
                cin >> withdraw;
                user.withdraw(withdraw);
                continue;
            }
            else if (choice == 4){ // annual interest gain
                user.interest();
                continue;
            }
            else if (choice == 5){ // exit
                cout << endl << "Have a good day and goodluck with your financial future!";
                break;
            };
            break;
        }
    }
    return 0;
}