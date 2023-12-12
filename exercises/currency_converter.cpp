#include <iostream>
using namespace std;

int main() {
    cout << "Enter USD amount: $";
    double usd;
    cin >> usd;

    int cents = usd/.01;

    cout << "$" << usd << " converted to cents would be " << cents << " cents" << endl;
    return 0;
}