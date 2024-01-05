#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;


// VERSION 2 V
int main() {

    vector<string> todoList = {};

    cout << "Provide a name for your list: ";
    string name;
    cin >> name;
    name[0] = toupper(name[0]);


    bool run = true;
    while(run) {

        cout << endl << "Enter a todo item -OR- 'done': ";
        string todoItem;
        cin >> todoItem;

        if (todoItem != "done"){
            if(find(todoList.begin(), todoList.end(), todoItem) != todoList.end()){
                cout << "You've already added '" << todoItem << "'" << endl;
                continue;
            } else {
                todoList.push_back(todoItem);
                cout << "'" << todoItem << "' " << "was added to your list!" << endl;
            }
        } else {
            cout << endl << name << "'s Todo List" << endl;
            for (int i = 0; i < todoList.size(); i++){
                cout << i+1 << ". " << todoList[i] << endl;
            }
            run = false;
        }
    } 

    return 0;
}

// VERSION 1 V

// int main() {
//     vector<string> todoList;

//     while(true){
//         cout << "Enter a todo item or 'done': ";
//         string item;
//         cin >> item;

//         if (item != "done"){
//             todoList.push_back(item);
//             continue;
//         } else {
//             cout << "Heres your todo list:" << endl;
//             for (int i = 0; i < todoList.size(); i++){
//                 cout << i + 1 << ": " << todoList[i] << endl;
//             }
//             break;
//         }
        
//     }

//     return 0;
// }