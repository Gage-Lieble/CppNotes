#include <iostream> 
using namespace std;

int main() {
    // operators 
    double x = 10;
    int y = 3;
    int add = x + y;
    int sub = x - y;
    int mult = x * y;
    double div = x / y; // if x was not double, answer would be 3. since x is double answer is 3.33333 (also the output var in this case "div" must be set to double for float number output)
    int z = 10;
    int modu = z % y;
    
    cout << add;
    cout << sub;
    cout << mult;
    cout << div;
    cout << modu;

    // increment 
    int a = 10;
    int b = a++; // a = 11, b = 10
    int c = 10;
    int d = ++c;  // c = 11, d = 11
 
    cout << b;
    cout << c;
    return 0;
}

// NOTES
// division is weird in c++. if both values are ints, division will always return an int. In order to get accurate division results with numbers that don't divide evenly, one of the values must be a double.
// modulous values must be ints not doubles

// increment <var>++ OR ++<var> OR <var> = <var> + 1 
// prefix ++<var> : First modified <var> then assigns to storage variable (both variable will have smae value)
// suffix <var>++ : First <var> is assigned to storage variable then original <var> is modified