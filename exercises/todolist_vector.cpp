#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> todoList;

    while(true){
        cout << "Enter a todo item or 'done': ";
        string item;
        cin >> item;

        if (item != "done"){
            todoList.push_back(item);
            continue;
        } else {
            cout << "Heres your todo list:" << endl;
            for (int i = 0; i < todoList.size(); i++){
                cout << i + 1 << ": " << todoList[i] << endl;
            }
            break;
        }
        
    }

    return 0;
}