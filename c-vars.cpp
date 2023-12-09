#include <iostream> 
using namespace std;


int main() {
    // constant vars (unchangable)
    const double pi = 3.14;
    
    // regular vars
    int my_int = 100;
    double my_float = 99.9; 

    // modifying var values
    int a = 1;
    int b = 2;
    int place_hold = a;

    a = b; // redefine
    b = place_hold;

    cout << a;
    cout << b;
    return 0;
}

// NOTES
// variable type must be declared before variable name
// const : defines a constant variable thats value cannot be modified