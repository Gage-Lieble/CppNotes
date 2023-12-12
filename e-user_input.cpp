#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int value; // declare var for user input
    cin >> value; // set that var to what the user enters
    cout << value << endl;

    // accept multi step inputs
    cout << "Enter values for x and y: ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;
    
    return 0;
}

// NOTES
// cin : like input in python (character in)
// notice the change of direction of arrows (cout << vs cin >>) (Think of the flow of data in cout were setting the string pointed to console while cin sets what ever specified variable to what the user types in this case "value")
// stack cin inputs : cin <var1> >> <var2> >> <var3> (the seperate input values can either be type on 1 line with space seperation or entered on a new line after each value is entered e.g 10 5 6 OR 10 <enter> 5 <enter> 6 <enter>)