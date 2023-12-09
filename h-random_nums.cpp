#include <iostream>

#include <cstdlib> // <- import for random methods
#include <ctime> // <- import for time
using namespace std;

int main() {
    long elaspedSeconds = time(0); // time since 1970
    srand(elaspedSeconds); // returns a random number based on given attribute int
    int number = rand() % 10; // modolus 10 limits returned values to 0-9. you can remove/change this modolus to increase range

    cout << number;
    return 0;
}