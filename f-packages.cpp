#include <iostream>

// extra packages 
#include <cmath>


using namespace std;

int main() {
    double num = 1.3;

    double round_down = floor(num);
    double round_up = ceil(num);

    double power = pow(2, 3);
    cout << "round down: " << round_down << endl << "round up: " << round_up << endl << "power: "<< power;
    return 0; 
}

// NOTES
// include : to import packages, use #include <package_name> (import <package_name> in python)