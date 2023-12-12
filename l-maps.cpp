#include <iostream>
#include <map> // <- import map statement -> map<keyType, valueType> <map var name> 
using namespace std;

int main() {
    map<char, int> myMap ={
        {'A',7},
        {'b',6},
        {'C',3},
        {'d',8}
    };
    
    cout << myMap['A'] << endl; // access by key
    cout << myMap['X'] << endl; // returns 0 since 'X' key doesn't exist

    // INSERTING KEY & VALUES
    myMap['X'] = 69; // option 1
    myMap.insert(pair<char,int>('Z',420)); // option 2 | notice pair<char,int> matches map<char,int>

    cout << myMap['X'] << endl;
    cout << myMap['Z'] << endl;

    // REMOVING KEY VALUE PAIRS
    myMap.erase('b');
    // myMap.clear(); // <- clears entire map

    cout << myMap['b'] << " <- returned 0 because it does not exist" << endl;

    // EXTRA METHODS
    // myMap.empty(); // <- checks if map is empty. returns 1 if empty, returns 0 if full
    myMap.size(); // <- returns the amount of key val pairs
    myMap.find('X'); // <- returns an iterator that points to spefified key

    // LOOPING

    for (auto iterator = myMap.begin(); iterator != myMap.end(); ++iterator){ // ++iterator : increments the iterator to move to next key val pair
        cout << (*iterator).first << " : " << iterator->second << endl; // (*itr).option   is the same as  itr->option (first=key, second=value)
    };
    
    return 0;

}

// NOTES
// map : dictionary in python
// maps are not stored in an order

// Looping
// <mapname>.begin() : defines an iterator object that starts at a random key val pair (its a pointer)
// <mapname>.end() : detirmines once all key val pairs have been sifted through