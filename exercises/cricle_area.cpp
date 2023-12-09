#include <iostream>
#include <cmath>
using namespace std;


int main(){
    const double pi = 3.14159265359;
    cout << "Enter the radius: ";
    double radius;
    cin >> radius;

    double area = pow(radius, 2) * pi;
    cout << area;

    return 0;
    
}