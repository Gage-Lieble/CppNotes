#include <iostream>

using namespace std;

int main() {
    int x = 2;
    int *z = &x; // pointers must be equal to a memory location (&<varname>). (*<varname> defines a pointer).

    cout << "x: " << x << endl;
    cout << "z: " << z << endl;
    cout << "&z: " << &z << endl;
    cout << "*note 'z' and '&z' are different because pointers have their own memory address" << endl;

    // de-reference (get actual value instead of memory address that pointer points too)
    cout << "dereference..." << endl;
    cout << "*z: " << *z << endl; // *<varname> dereferences a memory address

    // increment
    int arr[] = {4,5,6};
    int *head = arr; // didn't need *arr because its an array

    for(int i = 0; i < 3; i++){
        head = arr + i; // you can increment the head by adding or subing. this will change which index (value) the head is pointing too
        cout << *head << "-OR-" << head << endl; // without "*" it'll return the memory address (* = dereference)
    }
    return 0;
}

// NOTES

// Pointers, unlike references, do have their own memory address. a reference (&<varname>) to another variable is inside that memory address.
// Pointers can be declared but not set to a value (int *z; instead of int *z = &x)
// Pointers cannot change where they point (references can)
// when pointing a pointer to an array you don't need "&" before the arr varname
