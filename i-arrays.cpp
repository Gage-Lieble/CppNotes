#include <iostream>
using namespace std;

int main() {
    int setSizeArr[3] = {1,2,420}; // <- [3] limits the size of the arr
    int flexibleArray[] = {1,2,3,4,5}; // <- leave empty for inf size
    flexibleArray[0] = 69; // modify by index

    cout << flexibleArray[0] << setSizeArr[2] << endl; // access by [<index>], duh

    // INVALID INDEX OUTPUT
    int thisArr[5] = {2,4,6,5,6};
    cout << "invalid index: " << thisArr[7]; // output: 34354 (random jibberish)
     
    // GETTING SIZE/LENGTH OF ARRAY
    string strArr[] = {"hey", "how", "you", "?"};
    cout << endl << sizeof(strArr)/sizeof(strArr[0]); // sizeof() returns size in bytes. dividing bytes of total list by size of 1 element returns total length.
    return 0;
}

