#include <iostream>
#include <map>
using namespace std;

int main() {
    string str = "Hello Gage";
    map<char,int> countMap;

    for(int i=0; i < str.length(); i++){ // iterates through string
        char letter = str[i];
        cout << letter << endl;
        if (countMap.find(letter) == countMap.end()){ // if the .find pointer matches the .end pointer, the key val doesn't exist, so you have to create it
            countMap[letter] = 0;
        }
        countMap[letter]++;
    }

    for (auto itr = countMap.begin(); itr != countMap.end(); itr++){ // displays map
        cout << itr->first << ": " << itr->second << endl;
    };
    return 0;
}

