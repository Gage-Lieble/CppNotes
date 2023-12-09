#include <iostream>
using namespace std;

int main(){

    // array setup
    cout << "How many items will you be adding to your todo list?: ";
    int cap;
    cin >> cap;

    string todoList[cap];
    int todoLength = sizeof(todoList)/sizeof(todoList[0]);

    // user input
    int ind = 0;
    while (ind <= todoLength){

        cout << "Enter a todo item -OR- 'done': ";
        string item;
        cin >> item;
        // if user entered a todo item and they havent entered more than the todolists length
        if (item != "done" && ind != todoLength){
            todoList[ind] = item;
            if (ind+1 == todoLength) { // displays todo list
                cout << "Heres your todo list!" << endl;
                for(int i = 0; i < todoLength; i++){
                        cout << i+1 << '.' << todoList[i] << endl;
                }
                cout << "Good luck with your tasks!";
                break;
            }
            cout << item << " Added to the list." << endl;
        } else if (item == "done"){ // if user entered done allowing them to leave some todo items empty 
            cout << "Heres your todo list!" << endl;
            for(int i = 0; i < todoLength; i++){
                if(todoList[i] != ""){ // checks if todo item is empty
                        cout << i+1 << '.' << todoList[i] << endl;
                    } else { // wont display empty todo items
                        break;
                    }
            }
            cout << "Good luck with your tasks!";
            break;
        }
        
        ind++;

    }
    return 0;
}

// Take aways:
// This project made by you without tutorial. obviously open note though.
// This program could be improved by using functions for repeating code
// uses a mixture of while and for loops
// arrays and getting array length
