#include <iostream>

using namespace std;

int main() {
    int a = 2; // define variable like normal
    int &b = a; // &b refers to a. any changes made to "b" will also change "a" and vice versa. ('&' creates a reference instead of copy)

    cout << "a: " << a << endl << "b: " << b << endl;
    a = 3;
    cout << "modifying 'a' variable only..." << endl;
    cout << "a: " << a << endl << "b: " << b << endl << "*notice both valus change even though only 'a' was modified" << endl;
    b = 420;
    cout << "modifying 'b' variable only..." << endl;
    cout << "a: " << a << endl << "b: " << b << endl << "*vice versa" << endl;

    // references and memory
    cout << "Memory address's" << endl;
    cout << "a memory address: " << &a << endl; // &<variable> by itself will return that variables memory location
    cout << "b memory address: " << &b << endl << "*notice they match because b refers to a" << endl;
    return 0;
}