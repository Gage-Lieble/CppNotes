#include <iostream>

using namespace std;

class BankAccount{
    public: // access specfifier (can be accessed outside this instance)
    string name;
    double balance;

    void withdraw(double amnt) {
        balance -= amnt;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.name = "Gage";
    myAccount.balance = 2500.0;

    cout << myAccount.name << " has $" << myAccount.balance << endl;
    myAccount.withdraw(100.0);
    cout << "$" << myAccount.balance << endl;
    return 0;
}