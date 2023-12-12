#include <iostream>
#include <vector> // <- import for vectors
using namespace std;

int main() {
    vector<int> myVector = {1,2,3};
    
    // Access values
    cout << myVector.front() << endl;
    cout << myVector[1] << endl;
    cout << myVector.back() << endl;

    // Basic vector info
    cout << "Size:" << myVector.size() << endl;
    cout << "Capacity:"  << myVector.capacity() << endl;

    // Adding and removing

            // adding to end
            cout << "Pushing 3 elems to end." << endl;
            myVector.push_back(4);
            myVector.push_back(69);
            myVector.push_back(420);

            // adding to front
            cout << "Inserting 2 elems." << endl;
            myVector.insert(myVector.begin(), 5); // <- using a pointer (.begin)(iterator) we can insert a value (5)
            myVector.insert(myVector.begin() + 2, 5); // adding to .begin() allows to to change index location
            cout << "Index 0:" << endl;
            
    cout << "Size:" << myVector.size() << endl;
    cout << "Capacity:"  << myVector.capacity() << endl; // note size and capacity might not match. capacity doubles value when adding elements

    // Shrink capacity to save memory
    cout << "Shrinking capacity." << endl;
    myVector.shrink_to_fit();

    cout << "Size:" << myVector.size() << endl;
    cout << "Capacity:"  << myVector.capacity() << endl;

    // Erase
    cout << "Erasing index 0" << endl;
    myVector.erase(myVector.begin());

    cout << "Size:" << myVector.size() << endl;
    cout << "Capacity:"  << myVector.capacity() << endl;

    // Looping

    for (int i  = 0; i < myVector.size(); i++){
        cout << myVector[i] << endl;
    }
    // -OR-
    for (auto itr = myVector.begin(); itr != myVector.end(); ++itr){
        cout << *itr << endl;
    }
    return 0;
}

// VECTORS
// similar to an array however it's dynamic. size can change throughout program
// <vectorName>.front() & <vectorName>.back()

// METHODS

/*
vec = <yourVectorsName>

vec.front() - returns first elem
vec.back()  - returns last elem
vec.size()  - length (amount of elems)
vec.capacity() - total length including empty spaces 
        > capacity doubles the amount of spaces each time theres an elems overflow. ex: capacity starts at 4, user adds a 5th elem, capacity updates to be 8, user adds an 8th elem, capacity updates to 16)
        > capacity doesn't decrease when you remove elems
vec.shrink_to_fit() - decreases capacity to fit remaining elems (removes empty spaces)
vec.push_back(x) - append to the end of a vector
vec.pop_back()  - removes last elem
vec.erase(vec.begin() + x) - erases the element that the pointer is pointing to. change the pointers position by + x to change index.


*/