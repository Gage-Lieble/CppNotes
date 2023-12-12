#include <iostream>
using namespace std;


int add(int x, int y){ // must declare return type and param types

    int output = x + y;
    return output;
}

void voidFunc() {
    cout << "Void functions don't require a return and can't return any values" << endl;
}

int doMath(int x, int y, int z = 1) { // set default value to make it not required
    return (x+y) * z;
}

void accessReference(int &x, int &y){ // &<param> targets the actual variable and its value thats passed in. in this case a and b will be swapped. if "&" wasn't used than a and b would NOT swap because it just makes a copy of the value.
    // swaps
    int temp = x;
    x = y;
    y = temp;
    // Notice no return statment but vairables "a" and "b" are still modified
}
int main() {
    cout << add(5, 6) << endl;
    voidFunc();
    cout << doMath(3,4) << endl; // didn't use 3 args and still works

    int a = 2;
    int b = 4;
    cout << a << ':' << b << endl;
    accessReference(a, b);
    cout << a << ':' << b << endl;
    return 0;
}