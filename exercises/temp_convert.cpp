#include <iostream>
using namespace std;
// °F = °C × (9/5) + 32

int main(){

    cout << "Enter a temp in celsius: ";
    double cel;
    cin >> cel;

    double far = (cel * 1.8) + 32;

    cout << cel << "deg celsius is " << far << "deg in fahrenheit.";

    return 0;
}