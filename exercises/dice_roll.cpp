#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    const short minVal = 1;
    const short maxVal = 6;
    srand(time(0));
    int dice = rand() % (maxVal-minVal+minVal)+minVal;

    cout << "You rolled a " << dice;
    
    return 0;

}