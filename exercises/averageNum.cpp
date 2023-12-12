#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <typeinfo>
using namespace std;

int findAverage(vector<string> nums) {

    int total = 0; // stores running total of all int values in list added together
    for (int i = 0; i < nums.size(); i++){
        string cur = nums[i];
    
        try { // skips any values that cannot be converted to an int
            int num = stoi(cur);
            total += num;
        } catch (const invalid_argument& e) { // '&' makes a reference to actaul value instead of making copy | e is an exceptoin object that has details about error
            // cout << "Error object: " << e.what() << endl;
            continue;
        }
    }
    int average = round(total / nums.size()); // rounds average up or down
    return average;
}

int main() {

    vector<string> nums;

    while (true){
        cout << "Enter a number -OR- 'done': ";
        string num;
        cin >> num;

        if (num == "done"){
            int avg = findAverage(nums);

            if(avg > 0){ // if avg is 0 that means no average was found (not enough numbers)
                cout << "Average: " << avg;
            } else {
                cout << "You didn't enter enough numbers lol.";
            }
            break;

        } else { // append to num list
            nums.push_back(num);
            continue;
        }
        
    }
    return 0;
}