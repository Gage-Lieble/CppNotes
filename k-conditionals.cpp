#include <iostream>
using namespace std;

int main() {
    cout << "Enter your age: ";
    int num;
    cin >> num;

    if(num >= 21) {
        cout << "You can smoke!";
    } else if (num < 18) {
        cout << "You're to young to smoke.";
    } else {
        cout << "You're and adult but still too young to smoke.";
    };

    return 0;
}